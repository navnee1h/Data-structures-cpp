#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int arr[5];
public:
    Stack(){
        top =-1;
        for (int i=0;i<5;i++){
            arr[i]=0;
        }
    }

    bool isEmpty(){
        return top==-1;
    }

    bool isFull(){
        return top==4;
    }

    void push(int value) {
        if(isFull()){
            cout<<"Stack overflow"<<endl;
        }
        else{
            top++;
            arr[top]=value;
        }
    }

    int pop(){
        if (isEmpty()){
            cout<<"Stack underflow"<<endl;
            return 0;
        } 
        else{
            int popValue = arr[top];
            arr[top]=0;
            top--;
            return popValue;
        }
    }

    void display(){
        cout <<"Stack is: ";
        for (int i=4;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack s1;
    int option,value;

    do{
        cout << "Your options are:" << endl;
        cout << "0. Exit" << endl;
        cout << "1. Display" << endl;
        cout << "2. Push" << endl;
        cout << "3. Pop" << endl;
        cout << "4. isFull" << endl;
        cout << "5. isEmpty" << endl;
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                s1.display();
                break;
            case 2:
                cout << "Enter a value to push: ";
                cin >> value;
                s1.push(value);
                break;
            case 3:
                cout << "Popped value: " << s1.pop() << endl;
                break;
            case 4:
                if (s1.isFull()) {
                    cout << "Stack is Full!" << endl;
                } else {
                    cout << "Stack is not Full!" << endl;
                }
                break;
            case 5:
                if (s1.isEmpty()) {
                    cout << "Stack is Empty!" << endl;
                } else {
                    cout << "Stack is not Empty!" << endl;
                }
                break;
            case 0:
                break;
            default:
                cout << "Invalid option! Please try again." << endl;
        }
    } while (option != 0);
    return 0;
}

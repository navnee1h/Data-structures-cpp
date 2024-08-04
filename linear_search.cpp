#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int list[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>list[i];
    }
    cout<<"Array is ";
    for(int i=0;i<size;i++){
        cout<<list[i]<<" ";
    }
    int num;
    cout<<endl<<"Enter element to search ? :";
    cin>>num;
    bool found=false;
    for(int x=0;x<size;x++){
        if(list[x]==num){
            cout<<"Element find on index number "<<x<<"!"<<endl;
            found=true;
            break;// Exit the loop once the element is found
        }
    }
    if(!found){
        cout<<"NOT found";
    }

    return 0;
}
//step 1: start
//step 2: enter size of the array
//step 3: enter complete array
//step 4: enter number to search
//step 5: search for the number in the array
//step 6: if found, print index and exit
//step 7: if not found, print "Not found!"
//step 8: stop

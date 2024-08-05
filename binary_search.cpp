#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int list[size];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>list[i];}
    int left=0;
    int right=size-1;
    int num;
    cout<<"Enter number to search: ";
    cin>>num;
    bool found=false;  // Flag to check if the element is found
    while(left<=right){
        int mid=(left+right)/2;
        if(list[mid]==num){
            cout<<"\nElement found at position "<<mid<<endl;
            found=true;
            break;} 
        else if(list[mid]>num){
            right=mid-1;}
        else{
            left=mid+1;}
    }
    if(!found){
        cout << "\nElement not found!" << endl;
    }
    return 0;
}

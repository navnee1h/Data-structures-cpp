#include<iostream>
using namespace std;
int main(){
    int A[]={1,13,0,121,163,451};
    int n=5;
    cout<<"Array is ";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]>A[j]){
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    cout<<"\nSorted array is ";
    for(int i=0;i<n;i++){
       cout<<A[i]<<" ";
   }
    return 0;
}

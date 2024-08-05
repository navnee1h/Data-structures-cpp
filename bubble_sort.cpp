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
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    cout<<"\nSorted array is ";
   for(int i=0;i<n;i++){
       cout<<A[i]<<" ";
   }
    return 0;
}

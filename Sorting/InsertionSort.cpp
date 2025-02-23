#include<iostream>
using namespace std;

void printArray(int a[],int n){
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int a[],int n){
    for (int i = 1; i < n; i++){

        int curr=a[i];
        int prev=i-1;

        while(prev>=0 && a[prev]>curr){
            a[prev+1]=a[prev];
            prev--;
        }
        
        a[prev+1]=curr;
    }
    
}
int main(){
    int a[]={4,7,2,8,9,76,43,111,1,89};
    int n=sizeof(a)/sizeof(int);
    cout<<"Before sorting"<<endl;
    printArray(a,n);
    cout<<endl;

    // bubbleSort(a,n); 
    // selectionSort(a,n);   
    insertionSort(a,n);
    cout<<"After sorting"<<endl;    
    printArray(a,n);

    return 0;
}

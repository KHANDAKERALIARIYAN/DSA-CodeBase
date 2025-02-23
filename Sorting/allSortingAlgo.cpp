#include<iostream>
using namespace std;

void printArray(int a[],int n){
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int a[],int n){
    for (int i = 0; i < n; i++){
        bool swapped =false;
        for (int j = 0; j < n-1-i; j++){
            if (a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped=true;
            }           
        }
        if(!swapped){
            return;
        }        
    }   
}

void selectionSort(int a[],int n){
    for (int i = 0; i < n; i++){
        int small=i;
        for (int j = i+1; j < n; j++){
            if(a[j]<a[small]){
                small=j;
            }
        } 
        swap(a[i],a[small]);      
    }  
}

void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int current=a[i];
        int previous=i-1;

        while(previous>=0 && a[previous]>current){
            a[previous+1]=a[previous];
            previous--;
        }

        a[previous+1]=current;
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

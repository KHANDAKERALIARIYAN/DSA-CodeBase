#include<iostream>
using namespace std;

void printArray(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void selectionSort(int a[], int n){
    for (int i = 0; i < n; i++){
        int smallestIndex=i;
        for (int j =i+ 1; j < n; j++){
            if (a[j]<a[smallestIndex]){
                smallestIndex=j;
            }         
        }
        swap(a[i],a[smallestIndex]);        
    }   
}

int main(){
    int a[] = {4, 7, 2, 8, 9, 76, 43, 111, 1, 89};
    int n = sizeof(a) / sizeof(int);
    cout << "Before sorting" << endl;
    printArray(a, n);
    cout << endl;

    selectionSort(a, n);
 
    cout << "After sorting" << endl;
    printArray(a, n);

    return 0;
}

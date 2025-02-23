#include <iostream>
using namespace std;

void printArray(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int a[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1 - i; j++){
            if (a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void optimizedBubbleSort(int a[], int n){
    for (int i = 0; i < n; i++){
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++){
            if (a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (!swapped){
            return;
        }
    }
}

int main()
{
    int a[] = {4, 7, 2, 8, 9, 76, 43, 111, 1, 89};
    int n = sizeof(a) / sizeof(int);
    cout << "Before sorting" << endl;
    printArray(a, n);
    cout << endl;

    // bubbleSort(a,n);
    optimizedBubbleSort(a, n);

    cout << "After sorting" << endl;
    printArray(a, n);

    return 0;
}
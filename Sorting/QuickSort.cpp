#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int startingIndex,int endingIndex){
    int index=startingIndex-1;
    int pivot=arr[endingIndex];
    for (int i = startingIndex; i < endingIndex; i++){
        if (arr[i]<=pivot){
            index++;
            swap(arr[i],arr[index]);
        }
    }
    index++;
    swap(arr[endingIndex],arr[index]);
    return index;
}

void quickSort(vector<int> &arr,int startingIndex,int endingIndex){
    if (startingIndex<endingIndex){
        int pivotIndex=partition(arr,startingIndex,endingIndex);
        quickSort(arr,startingIndex,pivotIndex-1); //left half
        quickSort(arr,pivotIndex+1,endingIndex);  //right half
    }  
}

// other approach

int partition_array(int a[],int low,int high){
    int pivot=a[high];
    int i=low-1;
    for (int j = low; j < high; j++){
        if (a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}

void quickSort_array(int a[],int low, int high){
    if (low<high){
        int pivot=partition_array(a,low,high);
        quickSort_array(a,low,pivot-1);
        quickSort_array(a,pivot+1,high);
    }
}
int main(){
    // vector<int> arr={12,31,35,8,32,17};
    // quickSort(arr,0,arr.size()-1);

    // for (int val : arr){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    int a[]={4,7,2,8,9,76,43,111,1,89};
    int n=sizeof(a)/sizeof(int);
    quickSort_array(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}

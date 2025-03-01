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
int main(){
    vector<int> arr={12,31,35,8,32,17};
    quickSort(arr,0,arr.size()-1);

    for (int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr,int st,int mid,int end){
    vector<int> temp;
    int i=st;
    int j=mid+1;
    while (i<=mid && j<=end){
        if (arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }     
    }

    while (i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while (j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    
    for (int k = 0; k < temp.size(); k++){
        arr[st+k]=temp[k];
    }
       
}

void mergeSort(vector<int>& arr,int st,int end){
    if (st<end){
        int mid=st+(end-st)/2;
        mergeSort(arr,st,mid); // left half
        mergeSort(arr,mid+1,end); // right half
        merge(arr,st,mid,end);
    }   
}
int main(){

    vector<int>a={12,31,35,8,32,17};
    mergeSort(a,0,a.size()-1);
    for (int val : a){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}

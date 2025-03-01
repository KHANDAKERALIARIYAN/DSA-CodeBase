#include<iostream>
#include<vector>
using namespace std;

void printArray(int a[],int n){
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

// bubble sort
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

// selection sort
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

// insertion sort
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

// quick sort using array
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

// quick sort using vector

void quickSort_array(int a[],int low, int high){
    if (low<high){
        int pivot=partition_array(a,low,high);
        quickSort_array(a,low,pivot-1);
        quickSort_array(a,pivot+1,high);
    }
}

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

// merge sort
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

    // int a[]={4,7,2,8,9,76,43,111,1,89};
    // int n=sizeof(a)/sizeof(int);
    // cout<<"Before sorting"<<endl;
    // printArray(a,n);
    // cout<<endl;
    // bubbleSort(a,n); 
    // selectionSort(a,n); 
    // insertionSort(a,n);
    // quickSort_array(a,0,n-1)
    // cout<<"After sorting"<<endl;    
    // printArray(a,n);

    // vector<int>a={12,31,35,8,32,17};
    // quickSort(arr,0,arr.size()-1);
    // mergeSort(a,0,a.size()-1);
    // for (int val : a){
    //     cout<<val<<" ";
    // }
    cout<<endl;
    return 0;
}

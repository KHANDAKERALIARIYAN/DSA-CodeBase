#include<iostream>
#include<array>
using namespace std; 
int main(){

    array<int,5> a={1,2,3,4,5};

    int size = a.size();

    cout<<"Size of array is: "<<size<<endl;

    cout<<"Elements of array are: ";

    for(int i=0;i<size;i++){
    
        cout<<a[i]<<" ";
    
    }
    
    cout<<endl;

    cout<<"Element at index 2 is: "<<a.at(2)<<endl;

    cout<<"Element at index 7 is: "<<a.at(7)<<endl; // will throw an error

    cout<<"Empty or not: "<<a.empty()<<endl;

    cout<<"First element is: "<<a.front()<<endl;
    
    cout<<"Last element is: "<<a.back()<<endl;

    return 0;

}
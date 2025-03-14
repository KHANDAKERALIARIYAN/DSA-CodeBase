#include<iostream>
#include<queue>
using namespace std;

int main(){

    // max heap 
    priority_queue<int> max;
 
    max.push(1);
    max.push(2);
    max.push(3);
    max.push(4);
    
    cout<<"size of max heap: "<<max.size()<<endl;
    cout<<"top element of max heap: "<<max.top()<<endl;

    int n = max.size();

    for(int i=0;i<n;i++){
        cout<<max.top()<<" ";
        max.pop();
    }
    cout<<endl;

    cout<<"Empty or not: "<<max.empty()<<endl;

    // min heap
    priority_queue<int,vector<int>,greater<int>> min;
    
    min.push(1);
    min.push(2);
    min.push(3);
    min.push(4);
    
    cout<<"size of min heap: "<<min.size()<<endl;
    cout<<"top element of min heap: "<<min.top()<<endl;

    int m = min.size();

    for(int i=0;i<m;i++){
        cout<<min.top()<<" ";
        min.pop();
    }
    cout<<endl;

    cout<<"Empty or not: "<<min.empty()<<endl;

    return 0;  

}
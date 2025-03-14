#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int> d1;
    d1.push_back(10);
    d1.push_front(20);
    d1.push_back(30);
    d1.push_front(40);
    cout<<"Elements of deque are: ";
    for(int i=0;i<d1.size();i++){
        cout<<d1[i]<<" ";
    }
    cout<<endl;

    
    // d1.pop_back(); // will remove the push back element
    // d1.pop_front(); // will remove the push front element

    // cout<<"After pop back the elements of deque are: ";
    // for(int i=0;i<d1.size();i++){
    //     cout<<d1[i]<<" ";
    // }
    // cout<<endl;

    cout<<"Empty or not: "<<d1.empty()<<endl;
    
    // cout<<"Print 2nd index element: "<<d1.at(2)<<endl; // will throw an error
    
    cout<<"First element is: "<<d1.front()<<endl;
    cout<<"Last element is: "<<d1.back()<<endl;
    cout<<"Size of deque is: "<<d1.size()<<endl;

    cout<<"Before delete Size of deque is: "<<d1.size()<<endl;
    d1.erase(d1.begin(),d1.begin()+1);
    cout<<"After deleteSize of deque is: "<<d1.size()<<endl;

    cout<<"Elements of deque are: ";
    for(int i=0;i<d1.size();i++){
        cout<<d1[i]<<" ";
    }
    cout<<endl;

    
    return 0;
} 
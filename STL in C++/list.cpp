#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> l1;
    l1.push_back(10);
    l1.push_front(20);

    cout<<"Elements of list are: ";
    for(int i:l1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"First element is: "<<l1.front()<<endl;
    cout<<"Last element is: "<<l1.back()<<endl;
    cout<<"Size of list is: "<<l1.size()<<endl;
    cout<<"Empty or not: "<<l1.empty()<<endl;

    l1.erase(l1.begin());
    cout<<"After erase the elements of list are: ";
    for(int i:l1){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> n(5,100);
    cout<<"Elements of copied list are: ";
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
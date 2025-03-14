#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;
    q.push("Khandaker");
    q.push("Ali");  
    q.push("Ariyan");

    cout<<"First element is: "<<q.front()<<endl;
    q.pop();
    cout<<"First element is: "<<q.front()<<endl;
    cout<<"Last element is: "<<q.back()<<endl;
    cout<<"Size of queue is: "<<q.size()<<endl;
    cout<<"Empty or not: "<<q.empty()<<endl;
    return 0;   
}
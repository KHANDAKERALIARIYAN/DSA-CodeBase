#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<string> s1;
    s1.push("Khandaker");
    s1.push("Ali");
    s1.push("Ariyan");
    cout<<"Top element is: "<<s1.top()<<endl;
    s1.pop();
    cout<<"Top element is: "<<s1.top()<<endl;
    cout<<"Size of stack is: "<<s1.size()<<endl;
    cout<<"Empty or not: "<<s1.empty()<<endl;
    
    return 0;
}
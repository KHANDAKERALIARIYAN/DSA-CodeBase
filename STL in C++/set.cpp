#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(50);

    for(int i:s1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of the set is: "<<s1.size()<<endl;

    cout<<"Empty or not: "<<s1.empty()<<endl;

    cout<<"Front element: "<<*s1.begin()<<endl;
    
    cout<<"Back element: "<<*s1.rbegin()<<endl;


    set<int>::iterator it = s1.begin();
    it++;
    s1.erase(it);

    for(int i:s1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"5 is present or not: "<<s1.count(5)<<endl;
    cout<<"10 is present or not: "<<s1.count(10)<<endl;

    set<int>::iterator it1 = s1.find(20);
    cout<<"Value present at 20: "<<*it1<<endl;

    
    return 0;
}
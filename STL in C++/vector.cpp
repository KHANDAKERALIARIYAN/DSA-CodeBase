#include<iostream>
#include<vector>
using namespace std;
int main(){ 

    vector<int> v1;
    cout<<"Size of vector is: "<<v1.size()<<endl;
    cout<<"Capacity of vector is: "<<v1.capacity()<<endl;
    v1.push_back(10);
    cout<<"Size of vector is: "<<v1.size()<<endl;
    cout<<"Capacity of vector is: "<<v1.capacity()<<endl;
    v1.push_back(20);
    cout<<"Size of vector is: "<<v1.size()<<endl;
    cout<<"Capacity of vector is: "<<v1.capacity()<<endl;
    v1.push_back(30);
    cout<<"Size of vector is: "<<v1.size()<<endl;
    cout<<"Capacity of vector is: "<<v1.capacity()<<endl;

    cout<<"Elements at 2nd index : "<<v1.at(2)<<endl;

    cout<<"First element is: "<<v1.front()<<endl;
    cout<<"Last element is: "<<v1.back()<<endl;

    cout<<"Elements of vector are: ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    v1.pop_back();
    // LIFO - Last In First Out
    cout<<"After pop back the elements of vector are: ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<"Empty or not: "<<v1.empty()<<endl;

    cout<<"Size of vector is: "<<v1.size()<<endl;
    cout<<"Capacity of vector is: "<<v1.capacity()<<endl;
    v1.clear();
    cout<<"Size of vector is: "<<v1.size()<<endl;
    cout<<"Capacity of vector is: "<<v1.capacity()<<endl;

    vector<int> a(5,10);
    cout<<"Elements of vector are: ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    vector<int> b(a);
    cout<<"Elements of vector b are: ";
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    return 0;

}
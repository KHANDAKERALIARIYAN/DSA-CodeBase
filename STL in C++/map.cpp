#include<iostream>
#include<map>
using namespace std;
int main(){

    map<int,string> m;
    m[1] = "khandaker";
    m[2] = "Shahriar";
    m[3] = "Sakib";
    m[4] = "Rahman";
    m[5] = "Rafi";

    m.insert({6,"Rahat"});
    m.insert({7,"Rahata"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second <<endl;
    }

    cout<<"Finding the value of key 3: "<<m[3]<<endl;
    cout<<"Finding the value of key 8: "<<m[8]<<endl;

    cout<<"Before erase elements are: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second <<endl;
    }

    m.erase(3);
    cout<<"After erase elements are: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second <<endl;
    }   

    return 0;
}
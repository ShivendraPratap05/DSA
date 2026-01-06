//Creating a map using c++ STL

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> m;
    m["tv"]=50;
    m["lap"]=100;
    m["mouse"]=50;

    for(auto p:m){
        cout<<p.first<<" : "<<p.second<<endl;
    }
}
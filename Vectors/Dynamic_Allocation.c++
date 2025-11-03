// Capacity: show the space left in the vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec;
    cout<<vec.size()<<endl;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    // vec.push_back(60);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;      //capacity function exceed the vector by its double
}
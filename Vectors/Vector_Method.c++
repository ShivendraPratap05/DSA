// Methods used in vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    cout<<"Size :"<<vec.size()<<endl;                     //vec.size gives the size of a vector
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);                                    //push the element at last of vector
    cout<<"After Push Back :"<<vec.size()<<endl;          
    vec.pop_back();                                       //pop/delete the element from last of vector
    cout<<"After Pop back :"<<vec.size()<<endl;  
    cout<<"Front value :"<<vec.front()<<endl;
    cout<<"Using at:"<<vec.at(0)<<endl;
    for(int i:vec){
        cout<<i<<endl;
    } 
}
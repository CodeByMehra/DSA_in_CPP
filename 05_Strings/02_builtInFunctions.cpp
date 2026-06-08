#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string str = "Vishal"; 
    cout<<str<<endl;
    
    cout<<str.size();  //excludes the null character
    str.push_back('A'); //only single character can be pushed at a time
    cout<<"After pushback: "<<str<<endl;
    str.pop_back();


    // + operator:
    string surname= "Mehra";
    cout<<str+" "+surname;

    //reverse()   -  algorithm header required
    reverse(str.begin(), str.end());

    return 0;
}
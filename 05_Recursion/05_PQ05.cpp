//Q: A person is at the bottom of a staircase with n steps. They can climb either 1 step or 2 steps at a time.
//Find the total number of distinct ways the person can reach the top of the staircase.

#include <iostream>
using namespace std;

int stair(int n){
    if(n==2) return 2;
    if(n==3) return 3;
    return stair(n-1)+stair(n-2);
}

int main(){
    int n;
    cout<<"Enter no. of stairs : ";
    cin>>n;
    cout<<"Possible paths : "<<stair(n);
}
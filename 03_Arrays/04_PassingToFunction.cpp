//Passing array to function
#include <iostream>
using namespace std;

void display (int a[]){
    for (int i=0; i<5; i++){
        cout<<a [i]; 
    }
}
int main(){
    int arr[]={1,32,23,1,3};
    display(arr);
    return 0;
}
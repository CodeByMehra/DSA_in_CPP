//Q: Find the last occurance of element in an array
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr;  //declaration

    arr.push_back(6); //pushh back operation
    arr.push_back(4);
    arr.push_back(9);
    arr.push_back(32);
    arr.push_back(4);
    arr.push_back(8);

    int x=4;
    //Method1:Forward Loop
    int index=-1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==x){
            index=i;
        } 
    }cout<<index;

    //method: Backward loop
    //used int i=arr.size()-1; to get last element
    for(int i=arr.size()-1; i>=0; i--){
        if(arr[i]==x){
            index=i;
            break;    //to stop the loop
        } 
    }cout<<index;

}
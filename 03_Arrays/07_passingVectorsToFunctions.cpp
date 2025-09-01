// We always have to pass the vectors by reference as if we pass it by value then a completely new vector will be created
#include <iostream>
#include <vector>  //Needed to use vectors
using namespace std;

void update(vector<int>& arr){    //Getting by reference using &
    arr[0]=999;
}

int main(){
    vector<int>arr;  //declaration

    arr.push_back(6); //pushh back operation
    arr.push_back(0);
    arr.push_back(9);
    arr.push_back(32);
    arr.push_back(4);

    cout<<arr[0]<<endl; //can accessede with same syntax of arrays

    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
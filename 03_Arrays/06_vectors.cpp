//vector is basically replacement of array
//Why  use vectors?? :- The main reason is fixed size of arrays, this is solved by vectors because vector is an dynamic array 
// syntax:  vector<dataType> name;
#include <iostream>
#include <vector>  //Needed to use vectors
using namespace std;
int main(){
    vector<int>arr;  //declaration

    arr.push_back(6); //pushh back operation
    arr.push_back(0);
    arr.push_back(9);

    arr.pop_back(); //used to pop element

    cout<<arr[0]<<endl; //can accessede with same syntax of arrays

    for (int i=0; i<arr.size(); i++){
        cout<<arr[i];
    }
}
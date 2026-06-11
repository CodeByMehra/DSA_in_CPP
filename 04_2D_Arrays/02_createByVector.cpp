#include <iostream>
#include <vector>
using namespace std;
int main(){

    int m,n;

    cout<<"Enter number of rows :";
    cin>>m;

    cout<<"Enter number of columns : ";
    cin>>n;

    vector<vector<int>> arr(m,vector<int>(n)); 
    cout<<"Enter elements of arrray: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<< arr[i][j]<<" ";
        } cout<<endl;
    }

    // int rows = v.size();
    // int cols = v[0].size(); //because 2D arrays ate - arrays of arrays- each row contain an array

}
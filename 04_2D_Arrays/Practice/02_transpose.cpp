//Ques: WAP to change the given matrix wih its tanspose; [leetcode 867]

#include <iostream>
#include <vector>
using namespace std;

void transpose(vector<vector<int>> arr, int m, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }
}

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
    cout<<"Before transpose : ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j] <<" ";
        }cout<<endl;
    }


    transpose(arr, m,n);
}
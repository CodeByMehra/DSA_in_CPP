//Ques: Given a 2D array,you have to find the sum of lower triangle of the array.take array as input.

#include <iostream>
#include <vector>
using namespace std;

void lowerTriangleSum(vector<vector<int>> arr){
    int m = arr.size();
    int n = arr[0].size();

    int sum = 0;
    for(int i=0;i<m; i++){
        for(int j=0; j<=i; j++){
            sum = sum + arr[i][j];
        }
    }
    cout << "sum of lower triangle is: "<<sum;
}

int main(){
    int m,n;

    cout<<"Enter number of rows: ";
    cin>>m;

    cout<<"Enter number of columns: ";
    cin>>n;

    vector<vector<int>> arr(m,vector <int> (n));

    cout<<"Enter elements of array: ";
    for(int i =0;i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Your Entered array is: "<<endl;;
    for(int i =0;i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    lowerTriangleSum(arr);
    return 0;
}
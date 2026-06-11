#include <iostream>
using namespace std;
int main(){
    //int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int m,n;

    cout<<"Enter number of rows :";
    cin>>m;

    cout<<"Enter number of columns : ";
    cin>>n;

    int arr[m][n];

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

    int size= sizeof(arr)/sizeof(arr[0][0]);
    int rows= sizeof(arr)/sizeof(arr[0]);
    int columns= sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<"size of array: "<<size<<endl;
    cout<<"Number of rows: "<<rows<<endl;
    cout<<"Number of columns: "<<columns<<endl;


    return 0;
}
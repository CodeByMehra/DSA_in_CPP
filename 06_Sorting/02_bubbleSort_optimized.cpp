#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n ){
    bool flag = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
             if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
                flag = false;
              }    
        }
        if(flag==true){
            break;
        }
    }

    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={2,3,1,7,5};
    int n= sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);
}
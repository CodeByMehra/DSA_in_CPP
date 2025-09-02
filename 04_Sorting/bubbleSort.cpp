#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int arr[], int n ){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
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
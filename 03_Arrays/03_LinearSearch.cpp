// Q: Find the element x in an array take array and x as input

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter value of "<<n<<" Elements"<<endl;
    for(int i=0; i<n; i++){
         cin>>arr[i];
    };

    int x;
    cout<<"Enter Element to search "<<endl;
    cin>>x;
    bool flag= false;
    for (int i=0; i<n; i++){
        if(x==arr[i]){
            flag=true;
        }
    }

    if(flag==true){
        cout<<"Found"<<endl;
    }else {
        cout<<"NOT FOUND!!";
    }
    return 0;
}
//Ques: input a string of size n and update all the even positions in the string to character 'a'. consider 0-based indexing.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of n"<<endl;
    cin>>n;
    char str[n];

    cout<<"Enter string of size :"<<n<<endl;
    cin>>str;
    
    cout<<"Your string is :"<<str<<endl;
    
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            str[i]='a';
        }
    }
    cout<<"After replacing even with 'a' :"<<str;
    return 0;
}
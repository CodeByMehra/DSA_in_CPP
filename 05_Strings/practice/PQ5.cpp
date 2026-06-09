// Ques:  input a string and return the number of times the neighbouring characters are different from each other
// intuition = if any neighbouring character will match, count will not increased

#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int count=0;

    for(int i=0; i<s.length(); i++){
        if(s.length()==1){
            break;                              //because if lengthwilll 1 then it give output as 1 which is wrong
        }
        if(i==0){                               //for first index
            if(s[i]!=s[i+1]){
                count++;
            }  
        }
        else if(i==s.length()-1){                   //for last index
            if(s[i]!=s[i-1]){
                count++;
            }
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;
        }
    }
cout<<count;
}
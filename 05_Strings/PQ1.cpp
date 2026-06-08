//Q: input a string of length n and cout all the vowels in given string

#include <iostream>
using namespace std;
int main(){
    string s= "vishal";
    
    int i=0;
    int count=0;
    while(s[i]!='\0'){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }i++;
    }cout<<count;

    return 0;
}
// Ques: Given a string, consisting of lowercase alphabets. Print most occuring character

#include<iostream>
#include <vector>
using namespace std;
int main(){
    string s = "vishalmehra";

    vector <int> arr(26);              // using vector automatically assign 0 to all indexes
    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;          //there is difference of 97 bw index and ascii value, it will increase count of that index by 1 at occurance od character
    }

    int max = 0;
    for(int i=0; i<26; i++){
        if(arr[i]>max) {
            max= arr[i];
        }
    }

    for(int i=0; i<26; i++){
        if(arr[i]==max) {
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<max<<endl;;
        }
    }
}
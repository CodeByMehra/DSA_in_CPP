//Leetcode: Valid Anagram (242)
//Ques: Given 2 strings s and t, return true if it is an anagram of s, and otherwise false
// eg: s=vishalmehra  t=mehravishal (output:True)

// to do this, sort both strings, if they are same then it is and anagram and return True;

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "vihsalmehra";
    string t = "mehravishal";

    sort(s.begin(),s.end());
    sort(t.begin(),s.end());

    if(s==t) cout<<true;
    else cout<<false;
}


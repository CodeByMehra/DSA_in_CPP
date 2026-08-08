// Q: Given a string, remove characters that appear repeatedly next to each other, keeping only one occurrence of each group.

// Input:
// aaabbcddd

// Look at consecutive characters:
// aaa → keep one a
// bb → keep one b
// c → keep c
// ddd → keep one d

// Output:
// abcd

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

void consecutive(string str){
    stack <char> st;

    for(int i=0; i<str.length(); i++){
        if (st.size()==0) st.push(str[i]);

        if(st.top() != str[i]) st.push(str[i]);
    }

    string newStr;
    while(st.size()!=0){
        newStr.push_back(st.top());
        st.pop();
    }
    reverse(newStr.begin(), newStr.end());
    cout<<newStr;

}

int main() {
    string s = "aaaaabbbbbccccccdijjj";
    consecutive(s);
    

    return 0;
}
// Q : Balanced Brackets
// we have to check closing bracket for every opening bracket, if closing bracket comes fiest then it will not considered as a pair

#include <iostream>
#include <stack>
using namespace std;

bool checkBalance(string str){  
    if (str.length()%2 !=0) return false;
    stack <char> st;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='('){
            st.push(str[i]);
        }
        else{
            if(st.size()==0) return false;
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;

}

int main() {
    string s = ")(())";
    cout<<checkBalance(s);
    

    return 0;
}

//  Steps:
//  1. if you see an opening bracket:
//         push
//  2. if you see a closing bracket:
//         Top ko dekho: if there is opening bracket , pop it
//  3. at the end :
//         if stack size == 0, return true else false
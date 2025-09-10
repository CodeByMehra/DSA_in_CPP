// Stack i also a linear Data structure(LIFO)
// operations on stack : Push, POP, Top
//syntax : stack <int> st;
//implementation:- 

#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size();
    st.pop();
}
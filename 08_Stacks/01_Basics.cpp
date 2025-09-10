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

    //to print a stack: (Reverse order)
    //we have to make and xtra temporary stack to prevent the loosing of the elements
    stack <int> temp;
    while(st.size()!=0){
        cout<<st.top();
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size()>0){
        int y= st.top();
        st.push(y);
        temp.pop();
        int y= temp.top();
    }
}
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
    st.push(40);
    st.push(50);


    //to print a stack: 
    //we have to make and xtra temporary stack to prevent the loosing of the elements
    stack <int> temp;
    while(st.size()!=0){
        // cout<<st.top()<< " ";
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    // cout<<temp.size();
    while(temp.size()>0){
        cout<<temp.top()<< " ";
        int y= temp.top();
        st.push(y);
        temp.pop();
    }
    
}
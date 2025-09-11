// Q: push value in stack at index 
#include <iostream>
#include <stack>
using namespace std;

void display(stack <int>& st){
    stack <int> temp;
    while(st.size()!=0){
        // cout<<st.top()<< " ";
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    
    while(temp.size()>0){
        cout<<temp.top()<< " ";
        int y= temp.top();
        st.push(y);
        temp.pop();
    }
}

int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
}
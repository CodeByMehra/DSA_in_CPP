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

void insertAtIdx(stack<int>&st, int index,int val){
    if(index>st.size()) return;
    stack<int> temp;
    for(int i=0; i=st.size()-index; i++){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()!=0){
        st.push(temp.top());
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
    insertAtIdx(st,2,25);
    display(st);
}
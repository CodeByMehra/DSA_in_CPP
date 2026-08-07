#include <iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int value){
        this->val= value;
        this->next = NULL;

    }
};

class stack{
    public:
    node*head;
    int size;
    stack(){
        head=NULL;
        size=0;
    }

    void push(int val){
        node* temp = new node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop(){
        if(head==NULL) cout<<"stack is empty";
        head = head->next;
        size--;
    }

    void top(){
        if(head==NULL) cout<<"stack is empty";
        cout<<head->val;
    }
};
int main() {

    

    return 0;
}
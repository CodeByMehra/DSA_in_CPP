//implementation o Linked List Class

#include <iostream>
using namespace std;

class node{
    public:
    int value;
    node* next; 
    node(int value){
        this->value = value;
        this->next = NULL;
    }
};

class linkedList{
    public:
    node* head;
    node* tail;
    int size;

    linkedList(){
        head= NULL;
        tail=NULL;
        size=0;
    }

    void insertAtEnd(int value){
    node* temp= new node(value);
    if(size==0){
        head=tail=temp;
    }else{
        tail->next = temp;
        tail = temp;
    }
    size++;
}
    void display(){
    node* temp=head;
    while( temp!=NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}

};


int main(){
    linkedList list1;
    list1.insertAtEnd(10);
    list1.display();
    list1.insertAtEnd(20);
    list1.display();
}
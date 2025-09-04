//implementation o Linked List Class

#include <iostream>
using namespace std;

class node{
    public:
    int value;
    node* next; 
    node(int value){
        this->value = value;
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
        size++;
    }
    cout<< "size : "<<size;
}

};


int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;

    display(a);
}
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

void display(node* head){
    node* temp=head;
    int size= 0; //to check the size of the LL
    while( temp!=NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
        size++;
    }
    cout<< "size : "<<size;
}

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
    //here we passed only first pointer o the linked list to the function 
}
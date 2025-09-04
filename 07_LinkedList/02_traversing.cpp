#include <iostream>
using namespace std;

//creeation of node for linked list
//this is a dummy linked list storing every pointer to null
class node{
    public:
    int value;
    node* next;  //Made a pointer named next using basic syntax(int* ptr)
    node(int value){
        this->value = value;
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


    node* temp= a;
    while( temp!=NULL){
        cout<<temp->value<<" ";
        temp = (temp->next);
    }
}
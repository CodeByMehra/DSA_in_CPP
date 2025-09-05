//Q:Write a function countNodes() that counts how many nodes are present in the list.

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
        head = tail = NULL;
        size=0;
    }

    void insert(int value){
        node* temp= new node(value);
        if(size==0){
            head=tail=temp;
        }else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void display(){
        node* temp = head;
        for(int i=0; i<size; i++){
            cout<<temp->value<<" ";
            temp= temp->next;
        }
        cout<<endl<<"Size : "<<size;
    }
};

int main(){
    linkedList li;
    li.insert(10);
    li.display();
}
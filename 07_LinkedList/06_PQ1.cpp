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

    
};

int main(){

}
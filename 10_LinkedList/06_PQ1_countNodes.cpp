//Q:Write a function countNodes() that counts how many nodes are present in the list.

#include <iostream>
using namespace std;

class node{
    int value;
    node* next;
    node(int val){
        this->value = val;
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
        tail= NULL;
        size=0;
    }

    void insert(int value){
        
    }

    void countNodes(){
        node* temp =head;
        
    }

};

int main() {

    

    return 0;
}
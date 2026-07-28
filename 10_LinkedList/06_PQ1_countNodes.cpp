//Q:Write a function countNodes() that counts how many nodes are present in the list.

#include <iostream>
using namespace std;

class node{
    public:
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
        node* temp ;
        temp->value = value;

        if(size==0){
            head = tail = temp;
            size++;
        }
        else{
            tail->next = temp->next;
            tail = temp;
            size++;
        }
    }

    void display(){
        
    }

    void countNodes(){
        node* temp =head;
        
    }

};

int main() {
    linkedList list1;

    list1.insert(10);

    

    return 0;
}
//Q: Given the head of a singly linked list, return the middle node of the linked list.
// If there are two middle nodes, return the second middle node

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

    void mid(){
        node* temp = head;
        int count=0;
        while(temp!=tail->next){
            temp = temp->next;
            count++;
        }

        int mid= count/2;
        node* t= head;
        for(int i=0; i<mid; i++){
            t= t->next;
        } 
        cout<<t->value;
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
    li.insert(20);
    li.insert(30);
    li.insert(40);
    li.insert(50);
    li.mid();
}
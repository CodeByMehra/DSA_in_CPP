// Remove Duplicates from Sorted List
// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well. 83

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

    void removeDuplicate(){
        if (head == NULL) return;
        node* temp= head;
        while(temp->next!=NULL){ 
            if(temp->value==temp->next->value){
                temp->next = temp->next->next;
            }
            else temp=temp->next;
        }
    };
        
    

    void display(){
        node* temp = head;
        for(int i=0; i<size; i++){
            cout<<temp->value<<" ";
            temp= temp->next;
        }
        cout<<endl;
    }
};

int main(){
    linkedList li;
    li.insert(10);
    li.insert(10);
    li.insert(10);
    li.insert(30);
    li.insert(50);
    li.display();
    li.removeDuplicate();
    li.display();
    
} 
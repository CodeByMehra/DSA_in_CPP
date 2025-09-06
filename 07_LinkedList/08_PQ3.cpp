// Q: Remove Nth Node From End of List -- L19
// Given the head of a linked list, remove the nth node from the end of the list and return its head.

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

    void deleteFromEnd(int n){
        node* slow = head;
        node* fast = head;

        for(int i=0; i<n; i++){
            if(fast==NULL) return ;
            fast=fast->next;
        }

        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        slow->next=slow->next->next;

    }
    

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
    li.insert(20);
    li.insert(30);
    li.insert(40);
    li.insert(50);
    li.display();
    li.deleteFromEnd(5);
    li.display();
}
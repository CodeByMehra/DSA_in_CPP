//Q:  Return the node where the two linked lists interssact 

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
        cout<<endl;
    }
};

int main(){
    linkedList list1 , list2;
    list1.insert(10);
    list1.insert(20);
    list1.insert(30);
    list1.insert(40);
    list1.insert(50);
    
    list2.insert(1);
    list2.head->next=list1.head;;
    list2.display();
}  
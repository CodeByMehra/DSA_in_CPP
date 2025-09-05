// implementation o Linked List Class

#include <iostream>
using namespace std;

class node
{
public:
    int value;
    node *next;
    node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

class linkedList
{
public:
    node *head;
    node *tail;
    int size;

    linkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertAtBegin(int value)
    {
        node *temp = new node(value);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtEnd(int value)
    {
        node *temp = new node(value);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int value)
    {
        if (idx < 0 || idx > size)
        {
            cout << " Invalid Index " << endl;
        }
        else if (idx == 0)
        {
            insertAtBegin(value);
        }
        else if (idx == size)
        {
            insertAtEnd(value);
        }
        else
        {
            node *temp = new node(value);
            node *t = head;
            for (int i = 0; i < idx - 1; i++)
            {
                t = t->next;
            }
            temp->next = t->next;
            t->next = temp;
            size++;
        }
    }

    int getAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid Index" << endl;
            return -1; // indicate error
        }
        node *temp = head;
        for (int i = 0; i < idx; i++)
        {
            temp = temp->next;
        }
        cout<< temp->value<<endl;
    }

    void deleteAtHead(){
        head= head->next;
        size--;
    }

    void deleteAtTail(){
        node*temp = head;
           while(temp->next!=tail){
            temp= temp->next;
           }
           temp->next=NULL;
           tail=temp;
           size--;
    }

     void deleteAtIdx(int idx){
        if(idx<0 || idx>size){
            cout<<"Invalid index"<<endl;
        }
        else if(idx==0){
            deleteAtHead();
        }
        else {
           node*temp = head;
           for(int i=0; i<idx-1; i++){
            temp= temp->next;
           }
           temp->next = temp->next->next;
           size--;
        }
    }

   


    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    linkedList list1;
    list1.insertAtEnd(10);
    list1.insertAtEnd(20);
    list1.insertAtEnd(30);
    list1.insertAtEnd(40);
    list1.insertAtEnd(50);
    list1.insertAtEnd(60);
    list1.display();
    
    list1.deleteAtIdx(3);
    list1.display();
    cout<<list1.size;
}

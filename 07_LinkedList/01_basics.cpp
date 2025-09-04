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
        this->next= NULL;
    }
};

int main(){
    node a(10);

}
// Q: Print the elements of Nth level
#include <iostream>
#include<climits>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;

    node(int val){
        this->val = val;
        this->left = NULL;
        this->right= NULL;
    }
};

 
void displayLevel(node* root,int n, int level=1){
    if(root== NULL) return;
    if(level==n)cout<<root->val<<" ";
    displayLevel(root->left,n , level+1);
    displayLevel(root->right,n , level+1);
}

int main(){
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);

    a->left = b;
    a->right= c;
    b->left = d;
    b->right= e;
    c->left = f;
    c->right= g;
    displayLevel(a, 2);
}
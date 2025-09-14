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

//Pre order: - 
void displayPre(node* root){
    if(root== NULL) return;
    cout<<root->val<<" ";
    displayPre(root->left);
    displayPre(root->right);
}
//Post Oder:
void displayPost(node* root){
    if(root== NULL) return;
    displayPost(root->left);
    displayPost(root->right);
    cout<<root->val<<" ";
}
// In order
void displayIn(node* root){
    if(root== NULL) return;
    displayIn(root->left);
    cout<<root->val<<" ";
    displayIn(root->right);
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
    displayPre(a);
}
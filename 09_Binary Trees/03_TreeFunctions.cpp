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

void display(node* root){
    if(root== NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sumOfTree(node* root){
    if(root== NULL) return 0;
    int sum=0;
    sum= root->val+sumOfTree(root->left)+sumOfTree(root->right);
    return sum;
}

int size(node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

int maxInTree(node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val, max(maxInTree(root->left), maxInTree(root->right)));
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
    display(a);
    cout<<sumOfTree(a);
}
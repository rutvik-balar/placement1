#include<bits/stdc++.h>
using namespace std;

struct node{
    int val ;
    node* left;
    node* right;

    node(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

void inorder (node* &root){
    if(root == NULL) return ;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void postorder (node* &root){
    if(root == NULL) return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
void priorder (node* &root){
    if(root == NULL) return ;
    cout<<root->val<<" ";
    priorder(root->left);
    priorder(root->right);
}



int main(){
    
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    priorder(root);
    cout<<endl;

    return 0;
}
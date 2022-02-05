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

void sumNode(node* root){
    if(root==NULL) return ;
    sumNode(root->left);
    sumNode(root->right);
    if(root->left!=NULL) root->val += root->left->val;
    if(root->right!=NULL) root->val += root->right->val;
}

int main(){
    
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    sumNode(root);
    inorder(root);
    cout<<endl;
    

    return 0;
}
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

void levelorder(node* &root){

    queue<node*> dq;
    dq.push(root);
    while(!dq.empty()){
         int size = dq.size();
         for(int i = 0;i<size;i++){
             node* topnode = dq.front();
             dq.pop();
             if(topnode->left!=NULL) dq.push(topnode->left); 
             if(topnode->right!=NULL) dq.push(topnode->right); 
             cout<< topnode->val <<" ";
         }
    }
}

int main(){
    
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    levelorder(root);

    return 0;
}
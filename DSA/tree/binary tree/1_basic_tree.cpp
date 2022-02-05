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


// this all are DFS traversal
void inorder (node* &root){
    // if(root == NULL) return ;
    // inorder(root->left);
    // cout<<root->val<<" ";
    // inorder(root->right);

    // using iterative
    if(root==NULL) return ; 
    stack <node*> s;
    node *cur = root;

    while(!s.empty() || cur!=NULL){
        while(cur!=NULL) {
            s.push(cur);
            cur=cur->left;
        }

        cur = s.top();
        s.pop();
        cout<<cur->val<<" ";
        cur = cur->right;

    }

}
void postorder (node* &root){
    // if(root == NULL) return ;
    // postorder(root->left);
    // postorder(root->right);
    // cout<<root->val<<" ";

    // using iterative
    if(root==NULL) return ; 
    stack <node*> s1,s2;
    s1.push(root);
    while(!s1.empty()){
        node* cur = s1.top();
        s2.push(cur);

        if(cur->left!=NULL) s1.push(cur->left);
        if(cur->right!=NULL) s1.push(cur->right);

    }

    while(!s2.empty()){
        cout<<s2.top();
        s2.pop();
    }

}
void priorder (node* &root){
    // if(root == NULL) return ;
    // cout<<root->val<<" ";
    // priorder(root->left);
    // priorder(root->right);

    // using iterative
    if(root==NULL) return ; 
    stack <node*> s;
    s.push(root);
    while(!s.empty()){
        struct node *t = s.top();
        s.pop();
        cout<<t->val<<" ";

        if(t->right!=NULL) s.push(t->right);
        if(t->left!=NULL) s.push(t->left);
    }
}

//this is a BFS traversal
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
    // inorder(root);
    // cout<<endl;
    postorder(root);
    // cout<<endl;
    // priorder(root);
    // cout<<endl;
    // levelorder(root);
    // cout<<endl;

    return 0;
}
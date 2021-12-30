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

int fcn (node* root , int& d){
    if(root==NULL) return 0;
    int ld = fcn(root->left,d);
    int rd = fcn(root->right,d);
    d = max(d,ld+rd);
    return max(ld,rd) +1;
}


int main(){
    
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    int d = 0 ;
    fcn (root,d);
    cout<<d;


    return 0;
}
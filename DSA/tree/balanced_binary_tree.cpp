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


bool bbt(node* root , int& h){
     if(root==NULL) return true;

     int lh=0,rh=0;

     if(!bbt(root->left,lh) || !bbt(root->right,rh)) return false;

     h = max(lh,rh) +1;
     
     if(abs(lh-rh)<=1) return true;
     else return false;
}


int main(){
    
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    int h = 0;
    cout<< bbt(root,h);

    return 0;
}
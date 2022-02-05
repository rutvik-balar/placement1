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

int maxi(node* root){
    if(root == NULL) return 0;
    return 1 + max(maxi(root->left),maxi(root->right));
}
int mini(node* root){
    if(root == NULL) return 0;
    int h1 = mini(root->left);
    int h2 = mini(root->right);
    
    return 1+ (h1&&h2?min(h1,h2):max(h1,h2));
}

int main(){
    
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    // root->left->left = new node(4);
    // root->left->right = new node(5);
    // root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<maxi(root)<<endl;
    cout<<mini(root)<<endl;


    return 0;
}
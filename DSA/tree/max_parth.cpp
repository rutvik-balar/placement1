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
int ans = INT_MIN;
int path_sum(node* root){
    if(root == NULL) return 0;

    int v = root->val;
    int lp = path_sum(root->left);
    int rp = path_sum(root->right);
    int cp = lp+rp+v;
    int path = max(max(v,lp+v),max(rp+v,cp));
    ans = max(ans,path);
    return max(lp+v,max(v,rp+v));

}


int main(){
    
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    path_sum(root);
    cout<<ans;

    return 0;
}

// hard qestion 
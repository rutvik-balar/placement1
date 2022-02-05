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

void inordertra (node* &root){
    if(root == NULL) return ;
    inordertra(root->left);
    cout<<root->val<<" ";
    inordertra(root->right);
}


// int searchpost(int inorder[],int start,int end,int cur){
//     for(int i = end ; i>start;i--){
//         if(inorder[i] == cur) return i;
//     }
//     return -1;
// }

// node* intandpost(int inorder[],int preorder[], int start,int end){
//     static int idx= end;
//    if(start>end) return NULL;

//    int cur = preorder[idx];
//    idx--;
//    node* nodetemp = new node(cur);
//    if(start==end) return nodetemp;

//    int pos = searchpost(inorder,start,end,cur);
//    nodetemp->right = intandpost(inorder,preorder,pos+1,end) ;
//    nodetemp->left = intandpost(inorder,preorder,start,pos-1);
//    return nodetemp;
// }
int searchpri(int inorder[],int start,int end,int cur){
    for(int i = start ; i<end;i++){
        if(inorder[i] == cur) return i;
    }
    return -1;
}

node* intandpri(int inorder[],int preorder[], int start,int end){
    static int idx= 0;
   if(start>end) return NULL;

   int cur = preorder[idx];
   idx++;
   node* nodetemp = new node(cur);
   if(start==end) return nodetemp;

   int pos = searchpri(inorder,start,end,cur);
   nodetemp->left = intandpri(inorder,preorder,start,pos-1);
   nodetemp->right = intandpri(inorder,preorder,pos+1,end) ;
   return nodetemp;
}



int main(){
    
    int inorder []= {4,2,5,1,6,3,7};
    int preorder []= {1,2,4,5,3,6,7};
    // int postorder []= {4,5,2,6,7,3,1};
    node* root1 = intandpri(inorder,preorder,0,6);
    // node* root2 = intandpost(inorder,postorder,0,6);
    inordertra(root1);
    // inordertra(root2);

    
    return 0;
}
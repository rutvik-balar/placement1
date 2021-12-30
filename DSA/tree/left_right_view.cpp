#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *left;
    node *right;

    node(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

void leftView(node *&root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int s = q.size();
        for (int i = 0; i < s; i++)
        {
            node *temp = q.front();
            q.pop();
            if (i == 0)  cout <<temp->val<<" ";
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
        }
    }
}

void rightView(node *&root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int s = q.size();
        for (int i = 0; i < s; i++)
        {
            node *temp = q.front();
            q.pop();
            if (i == s-1)  cout <<temp->val<<" ";
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
        }
    }
}

int main()
{

    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    leftView(root);
    cout<<endl;
    rightView(root);

    return 0;
}
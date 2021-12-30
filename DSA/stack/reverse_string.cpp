#include <bits/stdc++.h>
#define max 50
using namespace std;
int top = -1;
char stk[50];

void push(char oper)
{
    if (top == max - 1)
        cout << "stack overflow";
    else
        stk[++top] = oper;
}

char pop()
{
    if (top == -1)
        cout << "stack is empty";
    else
        return (stk[top--]);
    return 0;
}

void reverse_string(string name)
{
    for (int i = 0; i < name.length(); i++)
    {
        push(name[i]);
    }
    for (int i = 0; i < name.length(); i++)
    {
        cout << pop();
    }
}
int main()
{
    string name;
    //cout << "\nenter string name -->";
    getline(cin,name);
    reverse_string(name);
    //cout << "19it006 RUTVIK BALAR";
    return 0;
}
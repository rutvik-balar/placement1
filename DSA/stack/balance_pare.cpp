#include <bits/stdc++.h>
#define max 20
using namespace std;
int top = -1;
int stk[20];

void push(char op)
{
    if (top == max - 1)
        cout << "stack is full";

    else
        stk[++top] = op;
}
char pop()
{
    if (top == -1)
        cout << "stack is empty";

    else
        return stk[top--];

    return 0;
}

bool valid(string str)
{

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            push(str[i]);

        else if (top != -1 && str[i] == ')')
        {
            if (stk[top] == '(')
                pop();
            else
            {
                return false;
                break;
            }
        }
        else if (top != -1 && str[i] == ']')
        {
            if (stk[top] == '[')
                pop();
            else
            {
                return false;
                break;
            }
        }
        else if (top != -1 && str[i] == '}')
        {
            if (stk[top] == '{')
                pop();
            else
            {
                return false;
                break;
            }
        }
    }
    if (top != -1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{

    string str;
    cin >> str;
    if(valid(str))
       cout<<"balanced";
    else
       cout<<"not balanced";
    return 0;
}

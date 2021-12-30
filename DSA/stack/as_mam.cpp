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

int fun_f(char c)
{
    if (c == '^')
        return 6;
    else if (c == '*' || c == '/')
        return 3;
    else if (c == '+' || c == '-')
        return 1;
    return 0;
}
int fun_g(char c)
{
    if (c == '^')
        return 5;
    else if (c == '*' || c == '/')
        return 4;
    else if (c == '+' || c == '-')
        return 2;
    return 0;
}

void reverse_string(string infix)
{
    string postfix = "";
    int i = 0;
    while (infix[i] != '\0')
    {
        if (infix[i] >= 'a' && infix[i] <= 'z' || infix[i] >= 'A' && infix[i] <= 'Z')
            postfix += infix[i++];

        else if (infix[i] == '(')
            push(infix[i++]);

        else if (infix[i] == ')')
        {
            while (stk[top] != '(')
                postfix += pop();
            pop();
            i++;
        }
        else
        {
            while (top >= 0 && fun_f(infix[i]) < fun_g(stk[top]))
            {
                postfix += pop();
            }
            push(infix[i]);
            i++;
        }
    }
    while (top != -1)
        postfix += pop();
    //cout << "\nconverted postfix string is --> ";
    cout << postfix << endl;
}
int main()
{
    string infix;
    //cout << "\nenter infix expression -->";
    cin >> infix;
    reverse_string(infix);
    //cout << "19it006 RUTVIK BALAR";
    return 0;
}
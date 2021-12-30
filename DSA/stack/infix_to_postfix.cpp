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

int preci(char oper)
{
    if (oper == '+' || oper == '-')
        return 1;
    if (oper == '*' || oper == '/')
        return 2;
    if (oper == '^')
        return 3;
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
            while (top != -1 && preci(infix[i]) <= preci(stk[top]))
            {
                if (preci(infix[i]) == preci(stk[top]))
                {
                    if (infix[i] == '^')
                        break;
                }
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
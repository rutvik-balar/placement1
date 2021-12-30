#include <bits/stdc++.h>
#define max 20
using namespace std;
int top = -1;
char stk[20];
void push(char opre)
{
    if (top == max - 1)
    {
        cout << "stack is full";
    }
    else
    {
        stk[++top] = opre;
    }
}

char pop()
{
    if (top == -1)
    {
        cout << "stack is empty";
    }
    else
    {
        return stk[top--];
    }
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

void prifix_is(string infix)
{
    int i = 0;
    string prifix = "";
    reverse(infix.begin(), infix.end());
    for (int j = 0; j < infix.length(); j++)
    {
        if (infix[j] == '(')
            infix[j] = ')';
        if (infix[j] == ')')
            infix[j] = '(';
    }
    while (infix[i] != '\0')

    {
        if (infix[i] >= 'a' && infix[i] <= 'z' || infix[i] >= 'A' && infix[i] <= 'Z')
            prifix += infix[i++];

        else if (infix[i] == '(')
            push(infix[i++]);

        else if (infix[i] == ')')
        {
            while (stk[top] != '(')
                prifix += pop();
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
                prifix += pop();
            }
            push(infix[i]);
            i++;
        }
    }
    while (top != -1)
    {
        prifix += pop();
    }
    reverse(prifix.begin(), prifix.end());
    cout << prifix;
}
int main()
{

    string infix;
    cin >> infix;
    prifix_is(infix);
    //cout << "19IT006 RUTVIK BALAR";

    return 0;
}
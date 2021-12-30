#include <bits/stdc++.h>
#define max 20
using namespace std;
int top = -1;
int stk[20];

void push(char oper)
{
    if (top == max - 1)
    {
        cout << "stack is full";
    }
    else
    {
        stk[++top] = oper;
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

void evaluation(string postfix)
{
    int value = 0, i = 0;
    while (postfix[i] != '\0')
    {
        if (postfix[i] >= '0' && postfix[i] <= '9' )
        {
            push(postfix[i]-'0');
            i++;
        }
        else
        {

            int op2 = pop();
            int op1 = pop();
            switch (postfix[i])
            {
            case '+':
                push(op1 + op2);
                break;

            case '-':
                push(op1 - op2);
                break;

            case '*':
                push(op1 * op2);
                break;

            case '/':
                push(op1 / op2);
                break;

            case '^':
                push(pow(op1, op2));
                break;
            }
            i++;
        }
    }
    value = pop();
    cout <<value;
}

int main()
{
    string postfix;
    cin>>postfix;
    evaluation(postfix);
    return 0;
}
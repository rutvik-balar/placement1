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

void evaluation(string prifix)
{
    int value = 0, i = prifix.length() - 1;
    while (i >= 0)
    {
        if (prifix[i] >= '0' && prifix[i] <= '9')
        {
            push(prifix[i] - '0');
            i--;
        }
        else
        {

            int op1 = pop();
            int op2 = pop();
            switch (prifix[i])
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
            i--;
        }
    }
    value = pop();
    cout << value;
}

int main()
{
    string prifix;
    cin >> prifix;
    evaluation(prifix);
    return 0;
}
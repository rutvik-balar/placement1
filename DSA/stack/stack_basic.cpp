#include <bits/stdc++.h>
using namespace std;
class stacks
{
    int top;
    int *arr;
    int x;

public:
    stacks(int n)
    {
        top = -1;
        arr = new int[n];
        x=n;
    }
    void push()
    {
        if (top >= x - 1)
        {
            cout << "stack overflow stay in your limit" << endl;
            cout<<"-------------------------------------\n";
        }
        else
        {
            int push_ele;
            cout << "Enter element u want to push -->";
            cin >> push_ele;
            arr[++top] = push_ele;
            cout << "your push element is --> " << arr[top]<<endl;
            cout<<"-------------------------------------\n";
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack Underflow push something" << endl;
            cout<<"-------------------------------------\n";
        }
        else
        {
            cout << "poped element is --> " << arr[top] <<endl;
            --top;
            cout<<"-------------------------------------\n";
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "sorry...! stack has no element " <<endl;
            cout<<"-------------------------------------\n";

        }
        else
        {
            cout << "Your stack element is --> ";
            for (int i = top; i > -1; i--)
            {
                cout <<arr[i]<<" ";
            }
            cout<<endl;
            cout<<"-------------------------------------\n";
        }
    }
};
int main()
{

    cout << "19IT006 RUTVIK BALAR" << endl;
    int n;
    cout << "Enter size of array --> " << endl;
    cin >> n;
    stacks st(n);
    int ch;
    cout<<"-------------------------------------\n";
    cout << "Choose 1 to perfrom push operation.\n";
    cout << "Choose 2 to perfrom pop operation.\n";
    cout << "Choose 3 to perfrom display operation.\n";
    cout << "Choose 4 to exit your program.\n";
    cout<<"-------------------------------------\n";

    do
    {
    cout << "choose anyone 1,2,3,4." << endl;
    cout << "U want -->  ";
    cin >> ch;

    switch (ch)
    {
    case 1:
        st.push();
        break;

    case 2:
        st.pop();
        break;

    case 3:
        st.display();
        break;

    default:
        break;
    }
    }while (ch != 4);

        return 0;
}
#include <bits/stdc++.h>
#define max 5
using namespace std;
int front = -1;
int rear = -1;
int arr[5];

void enqueue(int op)
{
    if (rear == max - 1)
    {
        cout << "Queue is full\n";

        return;
    }
    arr[++rear] = op;
    if (front == -1)
    {
        front++;
    }
}

int dequeue()
{
    if (front == -1)
    {
        cout << "Queue is empty\n";

        return 0;
    }
    if (front == rear)
    {
        cout << "Deleted element is --> " << arr[front] << endl;
        front = -1;
        rear = -1;

        return 0;
    }
    return arr[front++];
}

void display()
{
    if (front == -1 )
    {
        cout << "No elemant in queue\n";
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int ch;
    cout << endl;
    cout << "Enter to 1 to enter value in queue.\n";
    cout << "Enter to 2 to delete value in queue.\n";
    cout << "Enter to 3 to display all value.\n";
    cout << "enter to 4 to exite code. \n";
    cout << "Enter what u want 1,2,3 --> ";
    do
    {
        cin >> ch;
        switch (ch)
        {
        case 1:
            int temp;
            cout << "enter what u want to enter in queue -->";
            cin >> temp;
            enqueue(temp);
            break;
        case 2:
            cout << "Deleted element is --> " << dequeue();
            break;
        case 3:
            display();
            break;
        }
    } while (ch != 4);

    return 0;
}
#include <bits/stdc++.h>
#define max 5
using namespace std;
int front = -1;
int rear = -1;
int arr[5];

void enqueue(int op)
{
    if (rear == max - 1)
        rear = 0;
    else
        rear++;
    if (front == rear)
    {
        cout << "queue is full";
        if (rear == 0)
        {
            rear = max - 1;
        }
        else
        {
            rear--;
        }
        return;
    }
    arr[rear] = op;
    if (front == -1)

    {
        front = 0;
        return;
    }
}

int dequeue()
{
    if (front == -1)
    {
        cout << "Queue is empty\n";

        return 0;
    }
    int y = arr[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;

        return y;
    }
    if (front == max - 1)
        front = 0;
    else
        front++;

    return y;
}

void display()
{
    if (front == -1 )
    {
        cout << "No elemant in queue\n";
        return;
    }
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        for (int i = front; i <= max - 1; i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = 0; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int ch,enq,dnq;
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
        
            cout << "enter what u want to enter in queue -->";
            cin >> enq;
            enqueue(enq);
            break;
        case 2:
            dnq = dequeue();
            if (dnq)
            {
                cout << endl
                     << "Deleted Element is : " << dnq << endl;
            }
            break;
        case 3:
            display();
            break;
        }
    } while (ch != 4);

    return 0;
}
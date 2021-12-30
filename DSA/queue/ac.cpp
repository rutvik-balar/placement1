#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define size 20
int Q[size],P[size];
int front = -1;
int rear = -1;

void enqueue(int data,int p, int n)
{
    if(rear == size-1)
    {
        cout<<"Queue is Overflow :"<<endl;
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
            Q[rear] = data;
            P[rear] = p;

        int temp,temp1;
        for(int i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n-1;j++)
            {
                if(P[j]<P[j+1])
                {
                    temp = Q[i];
                    Q[i] = Q[i+1];
                    Q[i+1] = temp;

                    temp1 = P[i];
                    P[i] = P[i+1];
                    P[i+1] = temp1;
                }
            }
            //cout<<"The Data is According to priority is :"<<Q[i]<<" ";
        }
        cout<<endl;
        for(int i= front;i<=rear;i++)
        {
            cout<<"The element is :"<<Q[i]<<" "<<P[i]<<endl;
        }
    }
}

/*int dequeue()
{
    if (front == -1)
    {
        cout << "Queue is empty\n";
        return 0;
    }
    if (front == rear)
    {
        cout << "Deleted element is --> " << Q[front] << endl;
        front = -1;
        return 0;
    }
 return Q[front++];
}

void display()
{
    if (front == -1 )
    {
        cout << "No elemant in queue\n";
        return;
    }
    cout << "Element in queue is --> ";
    for (int i = front; i <= rear; i++)
    {
        cout << Q[i] << " ";
    }
    cout << endl;
}
*/

int main()
{
    int ch;
    //cout << endl;
    cout << "Enter to 1 to enter value in queue.\n";
    cout << "Enter to 2 to delete value in queue.\n";
    cout << "Enter to 3 to display all value.\n";
    cout << "enter to 4 to exit from program. \n";
    cout << "Enter what you want 1,2,3 --> ";
    do
    {
        cin >> ch;
        switch (ch)
        {
        case 1:
            int n,data,priority;
            cout<<"Enter the number of the data :";
            cin>>n;
            cout<<"Enter your data with priority :";
            for(int i=0;i<n;i++)
            {
                cin>>data>>priority;
                enqueue(data,priority,n);
//                display();
            }

            break;
       /* case 2:
            cout << "Deleted element is --> " << dequeue()<<endl;
            display();
            break;
        case 3:
            display();
            break;*/
        }
    }while (ch != 4);
}
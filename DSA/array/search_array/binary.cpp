#include <iostream>
using namespace std;
int main()
{
    int n, key = 0;
    cout << "Enter number of element in array : ";
    cin >> n;
    int arr[n];
    cout<<"Enter array elements --> ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter key to find : ";
    cin >> key;
    int mid = 0, flag = 0;
    int last = n - 1, first = 0;
    while (last > first)
    {
        mid = (last + first) / 2;
        if (arr[mid] == key)
        {
            cout << "key found at index " << mid << endl;
            flag = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    if (flag == 0)
    {
        cout << "key not found !";
    }
}
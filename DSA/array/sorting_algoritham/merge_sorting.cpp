#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end) 
{

    int n1 = mid - start + 1;
    int n2 = end - mid;
    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++)
        arr1[i] = arr[start + i];
    for (int j = 0; j < n2; j++)
        arr2[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = start;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }  
    while (i < n1)
        arr[k++] = arr1[i++];
    while (j < n2)
        arr[k++] = arr2[j++];
}

void merge_sort(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int mid = (start + end) / 2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{
    int n;
    cout << "enter size of an array\n";
    cin >> n;
    int arr[n];
    cout << "enter array \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "19IT006 RUTVIK BALAR";

    return 0;
}
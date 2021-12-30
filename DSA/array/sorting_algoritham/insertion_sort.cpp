#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cout << "enter size of array -->";
    cin >> n;
    cout << "enter array elemant -->";
    int aa[n];
    for (i = 0; i < n; i++)
        cin >> aa[i];

    for (i = 1; i < n; i++)
    {
        int temp = aa[i];
        for (j = i - 1; j >= 0 && aa[j] > temp; j--)
            aa[j + 1] = aa[j];
        aa[j + 1] = temp;
        cout<<i << " pass array like --> ";
        for (int k = 0; k <n ; k++)
            cout<<aa[k]<<" ";
        cout<<endl;
    }
    cout << "  sorted array is --> ";
    for (i = 0; i < n; i++)
        cout << aa[i] << " ";
    return 0;
}
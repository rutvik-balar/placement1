#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if ((n == 1) || (n == 0))
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}
int main()
{
    int n;
    cout << "Number of steps u want :";
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << " " << fibonacci(i);
    return 0;
}
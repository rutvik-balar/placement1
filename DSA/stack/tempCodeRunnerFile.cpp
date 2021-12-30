#include <bits/stdc++.h>
using namespace std;
void TOH(int n, char a, char c, char b)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << a << " to rod " << c << endl;
        return;
    }
    TOH(n - 1, a, b, c);
    cout << "Move disk " << n << " from rod " << a << " to rod " << c << endl;
    TOH(n - 1, b, c, a);
}
int main()
{
    int n = 2;
    TOH(n, 'A', 'C', 'B');
    return 0;
}

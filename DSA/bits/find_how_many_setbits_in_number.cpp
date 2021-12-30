#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"19IT006 RUTVIK BALAR"<<endl;
    cout<<"enter n"<<endl;
    cin>>n;
    int c = 0;
    for (int i = 0; n!=0; i++)
    {
        /* code */
         n=(n & n-1) ;
        c++;
    }
    cout<<c<<endl;
    cout<<"19IT006 RUTVIK BALAR";

    return 0;
}
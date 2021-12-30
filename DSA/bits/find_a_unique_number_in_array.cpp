#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"19IT006 RUTVIK BALAR"<<endl;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter an array"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans = 0 ;
    for (int i = 0; i < n; i++)
    {

        /* code */
        ans = ans ^ arr[i];
    }
    cout<<ans<<endl;
    
    cout<<"19IT006 RUTVIK BALAR";

    return 0;
}
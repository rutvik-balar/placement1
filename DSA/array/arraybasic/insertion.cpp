#include <bits/stdc++.h>
using namespace std;

int main()
{
 int a[20],i,n,v,l;
    cout<<"enter number\n";
    cin>>n;
    for(i = 0;i<n;i++){
        cin>>a[i]; 
    }
    cout<<"enter number which u want to insert\n";
    cin>>v;
    cout<<"enter number which place u want to insert\n";
    cin>>l;
     for(i = n;i>=l-1;i--){
        a[i+1]=a[i];
    }
    a[l-1]=v;
     for(i = 0;i<n+1;i++){
        cout<<a[i]; 
    }
    return 0;
}

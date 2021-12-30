#include<bits/stdc++.h>
using namespace std;

int kadans (int a[] , int n ){
 int mx=INT_MIN;
    int cs=0;
    for (int i=0;i<n;i++){
        cs+=a[i];
        if(cs<a[i]){
            cs=a[i];

        }
        mx=max(mx,cs);
        
    }
    return mx;   
}
int main()
{
    int a[20],n,i,j,k,sum=0,maxi=0;
    cout<<"enter array number";
    cin>>n;
    cout<<"enter array elemant number";
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int wrep,unwrep;
    unwrep = kadans(a,n);
    for (i=0;i<n;i++)
    {
        sum+=a[i];
        a[i]=-a[i];
    }
    wrep = sum+kadans(a,n);;
    maxi=max(wrep,unwrep);
    cout<<maxi;
    return 0;
 
}
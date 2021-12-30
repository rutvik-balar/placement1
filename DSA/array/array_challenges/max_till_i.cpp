#include<bits/stdc++.h>
using namespace std;
main()
{
    int aa[20],n,i,j,k;
    cout<<"enter array number";
    cin>>n;
    cout<<"enter array elemant number";
    for (i=0;i<n;i++)
    {
        cin>>aa[i];
    }
    int mx=-19999;

    for (i=0;i<n;i++){
      mx=max(mx,aa[i]);
      cout<<mx;
    }
 
}
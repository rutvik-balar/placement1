#include<bits/stdc++.h>
using namespace std;
main()
{
    int aa[20],n,i,j,k,sum=0;
    cout<<"enter array number";
    cin>>n;
    cout<<"enter array elemant number";
    for (i=0;i<n;i++)
    {
        cin>>aa[i];
    }
    
    int mx=INT_MIN;
    int cs=0;
    for (i=0;i<n;i++){
        cs+=aa[i];
        if(cs<aa[i]){
            cs=aa[i];
        }
        mx=max(mx,cs);
       
    }
    cout<<mx;
 
}
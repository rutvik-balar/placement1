#include<bits/stdc++.h>
using namespace std;
main()
{
    int aa[20],n,i,j,k=0;
    cout<<"enter array number";
    cin>>n;
    cout<<"enter array elemant number";
    for (i=0;i<n;i++)
    {
        cin>>aa[i];
    }
    aa[n]=-1;
    if(n==1){
        cout<<"1";
    }
    for (i=0;i<n;i++){
      if(aa[i]>aa[i-1] && aa[i]>aa[i+1])
      {
          k++;
      }
    }
    cout<<k;
 
}
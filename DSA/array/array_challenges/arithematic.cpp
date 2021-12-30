#include<bits/stdc++.h>
using namespace std;
main()
{
    int aa[20],n,i,j,k=2,ans=2;
    cout<<"enter array number";
    cin>>n;
    cout<<"enter array elemant number";
    for (i=0;i<n;i++)
    {
        cin>>aa[i];
    }
     int d =aa[1]-aa[0];

    for (i=2;i<n;i++){
      if(aa[i]-aa[i-1]==d)
      {
          k++;
      }
      else
      {
          d=aa[i]-aa[i-1];
          k=2;
      }
      ans=max(k,ans);
    }
    cout<<ans;
 
}
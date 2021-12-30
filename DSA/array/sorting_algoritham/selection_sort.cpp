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
    for (i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
             if(aa[j]<aa[i])
             {
                 k=aa[i];
                 aa[i]=aa[j];
                 aa[j]=k;
             }
            
        }
    }
    for (i=0;i<n;i++)
    {
        cout<<aa[i];
    }


}
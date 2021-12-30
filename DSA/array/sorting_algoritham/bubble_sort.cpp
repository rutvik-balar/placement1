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
        for (j=0;j<n-i;j++){
             if(aa[j]>aa[j+1])  
             {
                 k=aa[j+1];
                 aa[j+1]=aa[j];
                 aa[j]=k;
             }
            
        }
    }
    for (i=0;i<n;i++)
    {
        cout<<aa[i];
    }


}
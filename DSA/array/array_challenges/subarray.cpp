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
    
    
    for (i=0;i<n;i++){
        for (j=i;j<n;j++){
            for(k=i;k<=j;k++){
             cout<<aa[k]<<" ";

            }
            cout<<endl;

    }
    }
 
}
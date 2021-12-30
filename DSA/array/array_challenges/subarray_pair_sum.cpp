#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa[20],n,i,j,k,sum=0;
    cout<<"enter array number";
    cin>>n;
    cout<<"enter array sum number";
    cin>>k;
    cout<<"enter array elemant number";
  
    for (i=0;i<n;i++)
    {
        cin>>aa[i];
    }
     //o n^2
   /*
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
    {
        if(aa[i]+aa[j]==k){
          cout<<i+1<<j+1;
        }
    }
    }*/
    //o(n)
    int fe=0,le=n-1;
    while(le>fe){
        if(aa[fe]+aa[le]==k){
            cout<<fe+1<<le+1;
            break;
        }
        else if(aa[fe]+aa[le]<k)
            fe++;
        else 
            le--;
    }
    return 0;
 
}
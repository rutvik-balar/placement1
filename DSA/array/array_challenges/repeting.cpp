#include"bits/stdc++.h"
using namespace std;
int main(){
    /*   int aa[10],n,i,j,k=0;
       cout<<"enter n\n";
       cin>>n;
       cout<<"enter array";
       for(i=0;i<n;i++){
           cin>>aa[i];
       }
        for(i=0;i<n;i++){
           for(j=i+1;j<n;j++){
               if(aa[i]==aa[j] && k==0){
                   cout<<i+1;
                   k++;
               }
           }
       }*/
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[a[i]] != -1){
            minidx=min(minidx,idx[a[i]]);
        }
        else
        {
            idx[a[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else 
    {
        cout<<minidx+1<<endl;
    }   
    return 0;
}
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,sum=0,bb[n];
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        int aa[k];
    for(int i=0;i<k;i++){
        cin>>aa[i];
        sum+=aa[i];
    
    }
    bb[i]=sum;
    sum=0;
    }
    for(int i=0;i<n;i++){
        cout<<bb[i]<<endl;
    }

    return 0;
}
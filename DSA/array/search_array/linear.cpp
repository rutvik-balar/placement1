#include<bits/stdc++.h>
using namespace std;
main(){
    int aa[5],i,j,k,l;
    cout<<"enter array";
    for(i=0;i<5;i++){
       cin>>aa[i];
    }
    cout<<"enter key values";
    cin>>k;
    for(i=0;i<=5;i++){
       if(aa[i]==k){
        cout<<"place  "<<i+1;
        break;}
    }
    
}
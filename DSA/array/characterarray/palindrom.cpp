#include "bits/stdc++.h"
using namespace std;
int main(){

    int n;
    cout<<"enter n ";
    cin>>n;
    char aa[n+1];
    cout<<"enter name ";
    cin>>aa;
    bool x=true;
    for(int i=0;i<=n;i++){
       if(aa[i]!=aa[n-1-i]){
          x=false;
       }
    }
    if(x==true){
        cout<<"yes";
    }
    else
    cout<<"no";

    return 0;
}
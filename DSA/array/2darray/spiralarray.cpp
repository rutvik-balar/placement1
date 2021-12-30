#include "bits/stdc++.h"
using namespace std;

int main(){

    int n,m;
    cout<<"enter n and m";
    cin>>n>>m;
    int aa[n][m];
    cout<<"enter elemant";
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>aa[i][j];
        }
    }

    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<aa[i][j]<<" ";
        }
        cout<<endl;
    }

    int rs=0,re=n-1,cs=0,ce=m-1;
    while(rs<=re && cs<=ce){

        for(int i=cs;i<=ce;i++){
            cout<<aa[rs][i]<<" ";
        }
        rs++;

        for(int i=rs;i<=re;i++){
            cout<<aa[i][ce]<<" ";
        }
        ce--;

        for(int i=ce;i>=cs;i--){
            cout<<aa[re][i]<<" ";
        }
        re--;
         
        for(int i=re;i>=rs;i--){
            cout<<aa[i][cs]<<" ";
        }
        cs++;

    }

   
    return 0;
}
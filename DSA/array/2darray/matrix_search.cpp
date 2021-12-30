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

    int k;
    cout<<"enter k";
    cin>>k;

    int r=0,c=n-1;
    while(r<m && c>=0 ){
        if(aa[r][c]==k){
            cout<<r<<c;
        }
        aa[r][c]>k?c--:r++;
    }

    return 0;
}
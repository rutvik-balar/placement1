#include "bits/stdc++.h"
using namespace std;

int main(){

    int n1,n2,n3;
    cout<<"enter n1 and n2 n3";
    cin>>n1>>n2>>n3;
    int aa[n1][n2];
    int bb[n2][n3];
    int ans[n1][n3];


    cout<<"enter elemant 1";
    for(int i =0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>aa[i][j];
        }
    }

    cout<<"enter elemant 2";
    for(int i =0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>bb[i][j];
        }
    }

    for(int i =0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;
        }
    }

    for(int i =0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
               ans[i][j]+=aa[i][k]*bb[k][j];
            }   
        }
    }

    for(int i =0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
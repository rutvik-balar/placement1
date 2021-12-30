#include "bits/stdc++.h"
using namespace std;

int main(){

    int n;
    cout<<"enter n ";
    cin>>n;
    int aa[n][n];

    cout<<"enter elemant";
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>aa[i][j];
        }
    }

    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<aa[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){
            int oo=aa[i][j];
            aa[i][j]=aa[j][i];
            aa[j][i]=oo;
        }
    }

    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<aa[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
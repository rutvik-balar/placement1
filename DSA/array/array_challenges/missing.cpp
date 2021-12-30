#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cout<<"hi";
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool b[n]={false};
    for(int i=0;i<n;i++){
        b[a[i]]=true;
    }
    for(int i=0;i<n;i++){
        if(b[i]==false){
            cout<<i;
        }
    }
    return 0;
}

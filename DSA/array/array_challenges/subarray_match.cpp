#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cout<<"n is";
    cin >> n;
    cout<<"array is";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s;
    cout<<"sum";
    cin>>s;
    int sum = 0;
     for (int i=0;i<n;i++){
        sum=0;
        for (int j=i;j<n;j++){
             sum+=a[j];
                if(sum==s){
                    cout<<i+1<<j+1;
                }
             }
         }
    return 0;
}

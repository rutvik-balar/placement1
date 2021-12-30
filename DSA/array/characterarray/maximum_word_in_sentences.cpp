#include "bits/stdc++.h"
using namespace std;
int main(){

    int n;
    cout<<"enter n ";
    cin>>n;
    //cin>>ignore();
    char aa[100];
    cout<<"enter name ";
    cin.get(aa,100);
    //cin>>ignore();

    int rm=0;
    int ans=0;
    for(int i=0;i<=n;i++){
       if(aa[i]==' ' && aa[i]== '\0')
       {
          rm++;
       }
       else
       {
           ans=max(ans,rm);
       }

    }
    cout<<ans;
    return 0;
}
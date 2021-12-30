#include <iostream>
using namespace std;

int main()
{
    int n,i,j,k,p,x,s;
     cout<<"number\n";
     cin>>n;
     s=(2*n-1)/2;
     
     for(i=1;i<=n;i++){
       for(j=1;j<=s;j++){
         cout<<" ";}
       for(k=1;k<=2*i-1;k++){
           if(k==1 || k==2*i-1)
         cout<<"*";
         else
         cout<<" ";
       }
      --s;

         cout<<endl;
         } 
     s=1;     
     for(i=n-1;i>=0;--i){
       for(j=1;j<=s;j++){
         cout<<" ";}
       for(k=1;k<=2*i-1;k++){
           if(k==1 || k==2*i-1)
         cout<<"*";
         else
         cout<<" ";
       }
      s++;

         cout<<endl;
         }
    return 0;
}

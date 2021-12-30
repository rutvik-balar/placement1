#include <iostream>
using namespace std;

int main()
{
    int n,i,j,k,p,x;
     cout<<"number\n";
     cin>>n;
     for(i=1;i<=n;i++){
       for(j=1;j<=n-i;j++){
         cout<<" ";}
         p=i;
       for(k=1;k<=i;k++){
         cout<<p;
         p--;   
       }
       p++;
       for(x=1;x<i;x++){
            p++;
         cout<<p;  
       }

           cout<<endl;

         } 

       for(i=n-1;i>=0;i--){
       for(j=1;j<=n-i;j++){
         cout<<" ";}
         p=i;
       for(k=1;k<=i;k++){
         cout<<p;
         p--;   
       }
       p++;
       for(x=1;x<i;x++){
            p++;
         cout<<p;  
       }

           cout<<endl;

         } 

    
    return 0;
}

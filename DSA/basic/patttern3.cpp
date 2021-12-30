#include <iostream>
using namespace std;

main()
{
    int n,i,j,k=1,p,x;
     cout<<"number\n";
     cin>>n;
     for(i=1;i<=n;i++){
        
         
         k=1;
       for(j=1;j<=i;j++){
           cout<<k<<" ";
           k=k*(i-j)/(j);
       }

           cout<<endl;

         } 

       
    

}

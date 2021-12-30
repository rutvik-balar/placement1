#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int aa[5]={10,20,30,40,50};
    int *p=aa;

    for(int i=0;i<5;i++){
        cout<<*p;
        p++;
    }

   return 0; 
}
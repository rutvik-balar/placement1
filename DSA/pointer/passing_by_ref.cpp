#include<bits/stdc++.h>
using namespace std;

 void swap(int *x,int *y){
     int k=*x;
     *x=*y;
     *y=k;
 }

int main(){

    int a=10;
    int b=20;
    int *p1=&a;
    int *p2=&b;

    swap(p1,p2);
    cout<<a<<b;


    return 0;
    
}
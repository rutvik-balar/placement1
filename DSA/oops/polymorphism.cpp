#include<bits/stdc++.h>
using namespace std;
 class poli {
public:
     void fun(){
         cout<<"this is a empty perameter ";
     }
     void fun(int x){
         cout<<"this is a int perameter ";
     }
     void fun(double y){
         cout<<"this is a double perameter ";
     }

 };

int main(){

    poli obj;
    obj.fun();
    obj.fun(3);
    obj.fun(4.3);

    

    return 0;
}
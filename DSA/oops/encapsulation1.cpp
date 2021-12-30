#include<bits/stdc++.h>
using namespace std;

class abc{
    private:
       int h1;
       void h11(){
           cout<<"privat";
       }
    protected:
       int h2;
       void h22(){
           cout<<"protected";
       }
    public:
        int h3;
        void h33(){
            cout<<"public";
        }
}

int main(){

    
    abc o;
    o.h33();

    

    return 0;
}
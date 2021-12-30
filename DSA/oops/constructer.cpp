#include"bits/stdc++.h"
using namespace std;

class stu {

   public:

    string name;
    int age;
    bool gender;

    stu (){
    
    cout<<"default"<<endl;
    name="ram";
    age=28;
    gender=1;
    cout<<name<<" "<<age<<" "<<gender<<endl;
    }
    
    stu (string n,int a,bool g){
    
    cout<<"peramiterize"<<endl;
    name=n;
    age=a;
    gender=g;
    cout<<name<<" "<<age<<" "<<gender<<endl;

    }

    stu (stu &s){
    
    cout<<"copy"<<endl;
    name=s.name;
    age=s.age;
    gender=s.gender;
    cout<<name<<" "<<age<<" "<<gender<<endl;

    }
    ~stu()
    {
        cout<<"distructer call"<<endl;
    }

};

int main(){

    stu aa;
    stu bb("kam",27,1);
    stu cc(bb);

    return 0;
}
#include"bits/stdc++.h"
using namespace std;

class stu {
   
   string name;
   public:
   
    int age;
    bool gender;

    void modal(){
        name="rahul";
    }

    void prin(){
        cout<<name<<endl<<age<<endl<<gender;
    }


};

int main(){

      stu a;

      a.age=23;
      a.gender=1;
      a.modal();
      a.prin();
      


    return 0;
}
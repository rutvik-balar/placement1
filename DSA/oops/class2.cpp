#include"bits/stdc++.h"
using namespace std;

class stu {
   
   string name;
   public:
   
    int age;
    bool gender;

    void modal(string s){
        name=s;
    }

    void prin(){
        cout<<name<<endl<<age<<endl<<gender<<endl;
    }

};

int main(){

      stu a[3];
      cout<<"enter all data age, gender ,name";
      for(int i=0;i<3;i++){
          cin>>a[i].age>>a[i].gender;
          string s;
          cin>>s;
          a[i].modal(s);
      }

       for(int i=0;i<3;i++){
          a[i].prin();
      }
      
    
    return 0;
}
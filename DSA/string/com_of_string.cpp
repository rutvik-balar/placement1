#include "bits/stdc++.h"
using namespace std;

int main(){
    
    string s="abbabbzz";
    cout<<s[0];

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==s[i+1]){
            continue;
        }
        else
        {
            cout<<s[i+1];
        }
        
    }
   
    return 0;
}




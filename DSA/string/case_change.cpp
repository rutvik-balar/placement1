#include "bits/stdc++.h"
using namespace std;

int main(){
    
    string s1="abcdefgh";

    for (int i = 0; i < s1.length() ; i++)
    {
        s1[i]-=32;
    }
    cout<<s1;
    


    return 0;
}




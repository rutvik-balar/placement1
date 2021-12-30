#include "bits/stdc++.h"
using namespace std;

int main(){
    
    string s1="abbabbzz";
    int a[26];
    for (int i = 0; i < 26; i++)
    {
        /* code */
        a[i]=0;
    }
    cout<<s1.size()<<endl;
    for (int i = 0; i < s1.size(); i++)
    {
        /* code */
        a[s1[i]-'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        /* code */
        cout<<a[i];
    }
    cout<<endl;

     int maxii=-1;
     char ans;

    for (int i = 0; i < 26; i++)
    {
        if(maxii<a[i]){
        maxii=a[i];
        ans='a'+i;
        }
    }

    cout<<maxii<<" "<<ans;
    


    return 0;
}




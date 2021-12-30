#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"19IT006 RUTVIK BALAR"<<endl;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i & 1<<j){
                cout<<arr[j];
            }
        }
        cout<<endl;
    }
    
    
    
    cout<<"19IT006 RUTVIK BALAR";

    return 0;
}
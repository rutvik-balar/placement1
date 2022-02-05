// luv tutorial
// not placement
#include<bits/stdc++.h>
using namespace std;

const int n = 1e5+10;
int parent[n];
int size[n];


void make(int v){
     parent[v]=v;
     size[v] =1;
}

int find(int v){
   if(v == parent[v]) return v;
   //path compration
   return parent[v] = find(parent[v]);
}

void Union(int a,int b){
    a = find(a);
    b = find(b);

    if(a!=b){
        //union by size
       if(size[a]>size[b]) {
           parent[b]=a;
           size[a]+=size[b];
       }
       if(size[a]<size[b]){
            parent[a]=b;
            size[b]+=size[a];
       }
    }

}


int main(){
     
     int n,k;
     cin>>n>>k;
     for (int i = 1; i <= n; i++)
     {
         make(i);
     }

     while(k--){
         int u,v;
         cin>> u>>v;
         Union(u ,v);
     }

     int connected_ct = 0 ;

     for (int i = 1; i <=  n; i++)
     {
         if(parent[i] == i) connected_ct++;
     }

     cout<<connected_ct;
     
     

    return 0;
}
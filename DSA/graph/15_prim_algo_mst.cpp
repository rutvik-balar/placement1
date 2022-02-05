#include <bits/stdc++.h>
using namespace std ;

int main (){
    
 int n ,m ;
    cin >> n>> m;

    vector<pair<int,int>> adj[n];

    for (int i = 0;i<m ; i++){
        int u ,v,w;
        cin >> u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    vector<int> key(n,INT_MAX);
    vector<bool> mst(n,false);
    vector<int> parent(n);

    key[0]= 0;
    parent[0]=-1;

    for(int cot = 0 ; cot < n-1 ; cot++){
        
        int mini = INT_MAX,u;
        for(int v = 0 ; v < n ; v++){
            if(mst[v] == false && key[v]<mini){
                mini = key[v];
                u=v;
            }
        }
        mst[u] = true;

        for(auto it: adj[u]){
            int v = it.first;
            int weight = it.second;
            if(mst[v]==false && weight<key[v]){
                key[v]=weight;
                parent[v]= true;
            }
        }

    }

    for (int i = 1; i < n; i++)
    {
        cout<<parent[i]<<"---" << i <<endl ;
    }
    
    return 0;
}
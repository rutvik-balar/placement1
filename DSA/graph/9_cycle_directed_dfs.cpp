#include<bits/stdc++.h>
using namespace std ;

bool cycle_dfs(int i , vector<int> &vis, vector<int> &dfsvis, vector<int> adj[]){
    vis[i] = 1;
    dfsvis[i] = 1;

    for(auto x : adj[i]){
        if(!vis[x]){
            if(cycle_dfs(x,vis,dfsvis,adj)) return true;
        }
        else if(dfsvis[i]){ 
            return true;
        }
    }

    dfsvis[i] = 0;
    return false;
}

int main(){
    
    int n ,m;
    cin>>n>>m;

    vector<int> adj[n+1];

    for(int i = 0;i<m;i++){

        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
    }

    vector<int> vis(n+1,0);
    vector<int> dfsvis(n+1,0);

    bool t = true;

    for(int i = 1 ; i<=n ; i++){
        if(!vis[i]){
            if(!cycle_dfs(i,vis,dfsvis,adj)) t = false;
        }
    }

    cout<<t;

    return 0;
}
#include<bits/stdc++.h>
using namespace std ;

void topo_dfs(int i , vector<int> &vis, stack<int> &st, vector<int> adj[]){
    vis[i] = 1;

    for(auto x : adj[i]){
        if(!vis[x]){
            topo_dfs(x,vis,st,adj);
        }
    }
    st.push(i);
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

    vector<int> vis(n,0);
    stack<int> st;

    for(int i = 1 ; i<=n ; i++){
        if(!vis[i]){
            topo_dfs(i,vis,st,adj);
        }
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
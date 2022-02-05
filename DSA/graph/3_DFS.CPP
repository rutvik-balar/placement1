#include <bits/stdc++.h>
using namespace std ;

void DFS (int i , vector<int> &vis , vector<int> &dfs , vector<int> adj[]){
      dfs.push_back(i);
      vis[i]=1;
      for(auto x : adj[i]){
          if(!vis[x]){
              DFS(x,vis,dfs,adj);
          }
      }
}



int main (){
    
    int n ,m ;
    cin >> n>> m;

    vector<int> adj[n+1];

    for (int i = 0;i<m ; i++){
        int u ,v;
        cin >> u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector <int> vis(n+1,0);
    vector <int> dfs;

    for(int i = 1 ; i<= n ; i++){
        if(!vis[i]){
            
            
            DFS(i,vis,dfs,adj);
            
            
        } 
    }

    cout<<"dfs is - ";
    for (auto x : dfs ){
        cout<<x;
    }
    

    return 0;
}
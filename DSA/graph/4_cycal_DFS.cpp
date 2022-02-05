#include <bits/stdc++.h>
using namespace std ;

bool cycleDFS (int i , int previous,vector<int> &vis  , vector<int> adj[]){
      vis[i]=1;
      for(auto x : adj[i]){
          if(vis[x]==0){
              if(cycleDFS(x,i,vis,adj)) return true;
          }
          else if (previous != x) return true;
      }
      return false;
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
    bool t = true;

    for(int i = 1 ; i<= n ; i++){
        if(!vis[i]){  
            if(!cycleDFS(i,-1,vis,adj)) t =false;    
        } 
    }
    cout<<t;

    return 0;
}
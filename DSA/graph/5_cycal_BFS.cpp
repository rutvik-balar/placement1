#include <bits/stdc++.h>
using namespace std ;

bool cycleBFS (int i , vector<int> &vis  , vector<int> adj[]){
      queue <pair<int,int>> q;
            q.push({i,-1});
            vis[i] = 1;

            while(!q.empty()){
                int node = q.front().first;
                int previous = q.front().second;

                q.pop();

                for(auto x : adj[node]){
                    if(!vis[x]){
                        vis[x] = 1;
                        q.push({x,node});
                    }
                    else if (previous != x)
                        return true;
                }
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
            if(!cycleBFS(i,vis,adj)) t =false;    
        } 
    }
    cout<<t;

    return 0;
}
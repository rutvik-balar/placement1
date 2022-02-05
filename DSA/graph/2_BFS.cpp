#include <bits/stdc++.h>
using namespace std ;

void BFS (int &i , vector<int> &vis , vector<int> &bfs , vector<int> adj[]){
      queue <int> q;
            q.push(i);
            vis[i] = 1;

            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs.push_back(node);

                for(auto x : adj[node]){
                    if(!vis[x]){
                        q.push(x);
                        vis[x] = 1;
                    }
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
    vector <int> bfs;

    for(int i = 1 ; i<= n ; i++){
        if(!vis[i]){
            
            
            BFS(i,vis,bfs,adj);
            
            
        } 
    }

    cout<<"bfs is - ";
    for (auto x : bfs ){
        cout<<x;
    }
    

    return 0;
}
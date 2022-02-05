#include <bits/stdc++.h>
using namespace std ;

void BFS (int i , vector<int> adj[],vector<int> &distance){
      queue <int> q;
            q.push(i);
            distance[i] = 0;

            while(!q.empty()){
                int node = q.front();
                q.pop();

                for(auto x : adj[node]){
                    if(distance[node]+1<distance[x]){
                        distance[x]=distance[node]+1;
                        q.push(x); 
                        
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

    vector <int> distance(n,INT_MAX);

    
            
    BFS(0,adj,distance);

    for (auto x : distance ){
        cout<<x;
    }
    

    return 0;
}
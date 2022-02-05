#include<bits/stdc++.h>
using namespace std ;

// kahn's algorithm 
int main(){
    
    int n ,m;
    cin>>n>>m;

    vector<int> adj[n+1];

    for(int i = 0;i<m;i++){

        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
    }

    vector<int> indegree(n,0);
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        for (auto x :adj[i])
        {
            indegree[x]++;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if(indegree[i]==0) q.push(i);
    }

    while(!q.empty()){
       
       int i = q.front();
       q.pop();
       cout<<i<<" ";

       for(auto x : adj[i]){
           indegree[x]--;
           if(indegree[x]==0) q.push(x);
       }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std ;

bool usingBFS (int i , vector<int> &color  , vector<int> adj[]){
      queue <int> q;
            q.push(i);
            color[i] = 1;

            while(!q.empty()){
                int node = q.front();
                q.pop();

                for(auto x : adj[node]){
                    if(color[x]==-1){
                        color[x] = 1-color[node];
                        q.push(x);
                    }
                    else if (color[x]==color[node])
                        return false;
                }
            }
            return true;
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

    vector <int> color(n+1,-1);
    bool t = true;

    for(int i = 1 ; i<= n ; i++){
        if(color[i]==-1){  
            if(!usingBFS(i,color,adj)) t =false;    
        } 
    }
    cout<<t;

    return 0;
}
#include <bits/stdc++.h>
using namespace std ;

bool usingDFS (int i , vector<int> &color  , vector<int> adj[]){

            if(color[i]==-1) color[i] = 1;

            for(auto x : adj[i]){
                if(color[x]==-1){
                    color[x] = 1-color[i];
                    if(!usingDFS(x,color,adj)) return false;
                }
                else if (color[x]==color[i]) return false;
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
            if(!usingDFS(i,color,adj)) t =false;    
        } 
    }
    cout<<t;

    return 0;
}
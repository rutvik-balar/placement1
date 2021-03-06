#include <bits/stdc++.h> 
using namespace std; 

void findTopoSort(int node, int vis[], stack<int> &st, vector<pair<int,int>> adj[]) {
    vis[node] = 1; 
    for(auto it : adj[node]) {
        if(!vis[it.first]) {
            findTopoSort(it.first, vis, st, adj); 
        }
    }
    st.push(node);
}


void shortestPath(int src, int n, vector<pair<int,int>> adj[]) 
{ 
	int vis[n] = {0};
    
	stack<int> st; 
	for (int i = 0; i < n; i++) 
		if (!vis[i]) 
			findTopoSort(i, vis, st, adj); 
			
    vector<int> dist (n,INT_MAX);
	dist[src] = 0; 

	while(!st.empty()) 
	{  
		int node = st.top(); 
		st.pop(); 
 
		if (dist[node] != INT_MAX) {
		    for(auto it : adj[node]) {
		        if(dist[node] + it.second < dist[it.first]) {
		            dist[it.first] = dist[node] + it.second; 
		        }
		    }
		}
	} 

    for (int i = 0; i < n; i++)
         cout<<"dis of "<<i <<" is " <<dist[i]<<endl;
} 

int main() 
{ 
	int n, m;
	cin >> n >> m;
	vector<pair<int,int>> adj[n]; 
	for(int i = 0;i<m;i++) {
	    int u, v, wt;
	    cin >> u >> v >> wt; 
	    adj[u].push_back({v, wt}); 
	}
	
	shortestPath(0, n, adj); 

	return 0; 
}

// 6 7 0 1 2 1 2 3 2 3 6 0 4 1 4 2 2 4 5 4 5 3 1
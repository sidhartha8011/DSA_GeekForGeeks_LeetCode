// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    bool bipart;
    
    void color(int i,int colour,vector<int>adj[],vector <int> &col,vector<bool> &vis)
    {
        if(col[i]!=-1 && col[i]!=colour)
        {
            bipart=0;
            return;
        }
        col[i]=colour;
        if(vis[i])
            return;
        vis[i]=1;
        for(auto it: adj[i]){
            color(it,colour ^ 1,adj,col,vis);
        }
    }
	bool isBipartite(int V, vector<int>adj[]){
        bipart=1;
        
        vector<bool> vis(V,0);
        vector<int> col(V,-1);
        
        for(int i=0;i<V;i++){
            if(!vis[i])
                color(i,0,adj,col,vis);
        }
        return bipart;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends

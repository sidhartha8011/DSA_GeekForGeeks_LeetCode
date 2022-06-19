// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    
    bool iscycle(int src,vector<int> adj[],vector<int> &st,vector<int> &vis){
        st[src]=1;
        if(!vis[src]){
            vis[src]=1;
            for(auto i: adj[src]){
                if(!vis[i] && iscycle(i,adj,st,vis))
                    return 1;
                if(st[i])
                    return 1;
            }
        }
        
        st[src]=0;
        return 0;
        
    }
    
    
    
    bool isCyclic(int V, vector<int> adj[]) {
       
       vector<int> stack(V,0);
       vector<int> vis(V,0);
       
       for(int i=0;i<V;i++){
           if(!vis[i] && iscycle( i , adj , stack , vis ))
                    return true;
       }
       return 0;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool check(int start, int V, vector<int> adj[], int colour[])
	{
	    queue<int> q;
	    q.push(start);
	    colour[start]=0;
	    while(!q.empty())
	    {
	        int node=q.front();
	        q.pop();
	        for(auto it: adj[node])
	        {
	            if(colour[it]==-1)
	            {
	                colour[it]=!colour[node];
	                q.push(it);
	            }
	            else if(colour[it]==colour[node])
	            {
	                return false;
	            }
	        }
	    }
	    return true;
	}
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    int colour[V];
	    for(int i=0;i<V;i++)
	    {
	        colour[i]=-1;
	    }
	    for(int i=0;i<V;i++)
	    {
	        if(colour[i]==-1){
	        if(check(i, V, adj, colour)==false)
	        {
	            return false;
	        }
	        }
	    }
	    return true;
	}


};

//{ Driver Code Starts.
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
}
// } Driver Code Ends
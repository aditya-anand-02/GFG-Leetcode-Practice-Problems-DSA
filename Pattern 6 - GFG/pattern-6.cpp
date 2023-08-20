//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    int z=n;
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1; j<=z; j++)
	        {
	            cout<<j<<" ";
	        }
	        cout<<endl;
	        z--;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
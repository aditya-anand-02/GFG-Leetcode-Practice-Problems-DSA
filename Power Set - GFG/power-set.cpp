//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void traverse(int index, string x, string &s, int n, vector<string> &ans)
	{
	    if(index==n)
	    {
	        if(x!="")
	        ans.push_back(x);
	        return;
	    }
	    
	    x.push_back(s[index]);
	    traverse(index+1, x, s, n, ans);
	    x.pop_back();
	    traverse(index+1, x, s, n, ans);
	} 
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    string x;
		    vector<string> ans;
		    int n=s.length();
		    traverse(0, x, s, n, ans);
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends
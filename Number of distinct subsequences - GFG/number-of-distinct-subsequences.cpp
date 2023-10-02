//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    int mod=1e9+7;
	    unordered_map<char, int> mpp;
	    int n=s.length();
	    int dp[n+1]={0};
	    dp[0]=1;
	    for(int i=1;i<=n;i++)
	    {
	        dp[i]=(2*dp[i-1])%mod;
	        char curr=s[i-1];
	        if(mpp.find(curr)!=mpp.end())
	        {
	            dp[i]=(dp[i]-dp[mpp[curr]-1]+mod)%mod;
	        }
	        mpp[curr]=i;
	    }
	    return dp[n];
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
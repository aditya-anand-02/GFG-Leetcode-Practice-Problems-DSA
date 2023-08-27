//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low=1;
	    int high=m;
	    while(low<=high)
	    {
	        double mid=(low+high)/2;
	        if(pow(mid,n)==m)
	        {
	            return (int)mid;
	        }
	        else if(pow(mid, n)<m)
	        {
	            low=mid+1;
	        }
	        else
	        {
	            high=mid-1;
	        }
	    }
	    return -1;
	}
	   // double multiply(int num, int n)
	   // {
	   //     double ans=1.0;
	   //     for(int i=1;i<=n;i++){
	   //         ans*=num;
	   //     }
	   //     return ans; }
	    
	 
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long isP(long long diff, int arr[], int n){
        long long cnt=1, sum=0;
        for(int i=0; i<n; i++){
            if(sum+arr[i]<=diff){
                sum+=arr[i];
            }else{
                cnt++;
                sum=arr[i];
            }
        }
        return cnt;
    }
  
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long lo=arr[0];
        long long hi=arr[0];
        for(int i=1; i<n; i++){
            lo=max(lo, (long long)arr[i]);
            hi+=arr[i];
        }
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(isP(mid, arr, n)<=k){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        return lo;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends
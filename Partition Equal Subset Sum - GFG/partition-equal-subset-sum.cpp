//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool f(int index, int target, int arr[], vector<vector<int>> & dp)
{
    if(target==0)
    return true;
    if(index==0)
    {
        return arr[0]==target;
    }
    if(dp[index][target]!=-1)
    {
        return dp[index][target];
    }
    bool nontake= f(index-1, target, arr, dp);
    bool take=false;
    if(arr[index]<=target)
    {
        take=f(index-1, target-arr[index], arr, dp);
    }
    return dp[index][target]=take| nontake;
    
}
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0)
        return 0;
        else
        {
            int ans=sum/2;
            vector<vector<int>> dp(N, vector<int>(ans+1, -1));
            return f(N-1, ans, arr, dp);
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends
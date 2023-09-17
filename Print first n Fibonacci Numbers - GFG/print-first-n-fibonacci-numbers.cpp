//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> ans;
        if(n==1)
        return {1};
        if(n==2)
        return {1,1};
        if(n==3)
        return {1,1,2};
        long long dp[n]={-1};
        dp[0]=1;
        dp[1]=1;
        dp[2]=2;
        ans.push_back(1);
         ans.push_back(1);
          ans.push_back(2);
        for(int i=3;i<n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
            ans.push_back(dp[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends
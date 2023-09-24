//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isPossible(int barrier, int arr[], int N, int K)
    {
       
        int allocatedst=1;
        int pages=0;
        for(int i=0;i<N;i++)
        {
            //  if(allocatedst>K)
            // return false;
            if(arr[i]>barrier)
            {
                return false;
            }
            if(pages+arr[i]<=barrier)
            {
                pages+=arr[i];
            }
            else
            {
                allocatedst++;
                pages=arr[i];
            }
           
        }
       
        return allocatedst<=K;
    }
    //Function to find minimum number of pages.
    int findPages(int arr[], int N, int M) 
    {
        //code here
        if(N<M)
        return -1;
        int sum=arr[0];
        int mini=arr[0];
        for(int i=1;i<N;i++)
        {
            mini=min(mini, arr[i]);
            sum+=arr[i];
        }
        int res=-1;
        int low=mini;
        int high=sum;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(isPossible(mid, arr, N, M))
            {
                res=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
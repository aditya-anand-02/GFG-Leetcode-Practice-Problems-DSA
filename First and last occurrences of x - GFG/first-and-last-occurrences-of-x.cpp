//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> v;
        int first=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                first=i;
                break;
            }
            
        }
        int last=-1;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                last=i;
            }
            
        }
        v.push_back(first);
        v.push_back(last);
        return v;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
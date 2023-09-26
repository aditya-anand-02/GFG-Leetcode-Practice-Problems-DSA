//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int n=arr.size();
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int x=j+1;
                int y=n-1;
                while(x<y)
                {
                    if(arr[i]+arr[j]+arr[x]+arr[y]==k)
                    {
                        ans.push_back({arr[i], arr[j], arr[x], arr[y]});
                        
                        int tx=x,ty=y;
                        
                        while(x<y && arr[x]==arr[tx]) x++;
                        while(x<y && arr[y]==arr[ty]) y--;
                        
                    }
                    else if(arr[i]+arr[j]+arr[x]+arr[y]<k)
                    {
                        x++;
                    }
                    else
                    {
                        y--;
                    }
                }
                while(j+1<arr.size() && arr[j]==arr[j+1]) j++;
            }
            while(i+1<arr.size() && arr[i]==arr[i+1]) i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
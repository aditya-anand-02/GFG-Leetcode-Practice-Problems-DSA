//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> v;
    
    
    vector<int> temp;
    unordered_map<int, int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mpp[a[i]]>0)
        {
            temp.push_back(a[i]);
            mpp[a[i]]=0;
        }
    }
    sort(temp.begin(), temp.end());
    if(temp.size()==0 || temp.size()==1)
    {
        v.push_back(-1);
    }
    else{
    v.push_back(temp[0]);
    v.push_back(temp[1]);
    }
    return v;

    
    
}
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  static bool cmp(pair<int, int> a, pair<int, int> b)
  {
      if(a.first==b.first && a.second>b.second)
      return a.second>b.second;
      return a.first>b.first;
  }
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int, int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        vector<pair<int, int>> v;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp[nums[i]]>0)
            {
            v.push_back({mpp[nums[i]], nums[i]});
            mpp[nums[i]]=0;
            }
        }
        sort(v.begin(), v.end(), cmp);
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
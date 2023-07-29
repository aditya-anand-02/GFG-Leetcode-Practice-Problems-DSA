//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
class Solution {
public:
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> ans;
        solve(0, nums.size()-1, nums, ans);
        return ans; 
        
        
    }
    // Node* sortedArrayToBST(vector<int>& nums) {
    //     return solve(0, nums.size()-1, nums);
        
    
    void solve(int l, int r, vector<int> &nums, vector<int> &ans)
    {
        if(l>r)
        return;
        int mid=l+(r-l)/2;
        ans.push_back(nums[mid]);
        solve(l, mid-1,nums, ans);
        solve(mid+1, r, nums, ans);
        return;
    }
    

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends
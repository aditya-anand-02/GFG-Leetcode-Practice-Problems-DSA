//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void merge(vector<int> &arr, int low, int mid, int high)
  {
      vector<int> temp;
      int left=low;
      int right=mid+1;
      while(left<=mid && right<=high)
      {
          if(arr[left]<=arr[right])
          {
              temp.push_back(arr[left]);
              left++;
          }
          else
          {
              temp.push_back(arr[right]);
              right++;
          }
      }
      while(left<=mid)
      {
          temp.push_back(arr[left]);
              left++;
      }
      while(right<=high)
      {
           temp.push_back(arr[right]);
              right++;
      }
      for(int i=low; i<=high;i++)
      {
          arr[i]=temp[i-low];
      }
  }
  int countpairs(vector<int> &arr, int low, int mid, int high)
  {
      int cnt=0;
      int right=mid+1;
      for(int left=low; left<=mid; left++)
      {
          while(right<=high && arr[left]> 2* arr[right])
          {
              right++;
          }
          cnt+=(right-(mid+1));
      }
      return cnt;
  }
  int ms(vector<int> &arr, int low, int high)
  {
      int cnt=0;
      if(low==high)
      return cnt;
      int mid=(low+high)/2;
      cnt+=ms(arr, low, mid);
      cnt+=ms(arr, mid+1, high);
      cnt+=countpairs(arr, low, mid, high);
      merge(arr, low, mid, high);
      return cnt;
  }
    int countRevPairs(int n, vector<int> arr) {
        // Code here
        return ms(arr, 0, n-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
         map<char, int> mpp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n=s.length();
        int total=mpp[s[n-1]];
        for(int i=n-2;i>=0;i--)
        {
            if(mpp[s[i]]<mpp[s[i+1]])
            {
                total-=mpp[s[i]];
            }
            else
            {
                total+=mpp[s[i]];
            }
        }
        return total;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends
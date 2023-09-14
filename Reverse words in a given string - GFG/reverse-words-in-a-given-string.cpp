//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string s=".";
        s+=S;
        s+=".";
        int n=s.length();
        int j=n-1;
        string ans;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='.')
            {
                int x=i+1;
                while(x<=j)
                {
                    ans.push_back(s[x]);
                    x++;
                }
                j=i;
            }
        }
        ans.pop_back();
        return ans;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
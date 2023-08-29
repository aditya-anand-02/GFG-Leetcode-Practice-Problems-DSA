//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
        // your code here
        string ans="";
        if(s[0]>=65 && s[0]<=91)
        {
            for(int i=0;i<s.length();i++)
            {
                ans+=toupper(s[i]);
            }
        }
        else
        {
           for(int i=0;i<s.length();i++)
            {
                ans+=tolower(s[i]);
            } 
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
}
// } Driver Code Ends
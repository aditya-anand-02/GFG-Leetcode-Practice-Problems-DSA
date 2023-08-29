//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here 
	    string ans;
	    string cmp;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]>=97 && s[i]<=122)
	        {
	            ans.push_back(s[i]);
	            cmp.push_back(s[i]);
	        }
	    }
	    reverse(cmp.begin(), cmp.end());
	   for(int i=0;i<ans.length();i++)
	   {
	       if(ans[i]!=cmp[i])
	       return false;
	   }
	   return true;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends
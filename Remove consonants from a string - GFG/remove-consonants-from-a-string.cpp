//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


#include<bits/stdc++.h>
class Solution{
    public:
    string removeConsonants(string s){
    //complete the function heredef removeConsonants(s):
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        char ch=tolower(s[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            ans+=s[i];
        }
    }
    if(ans.length()==0)
    return "No Vowel";
    return ans;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsonants(s) << "\n";
    }
return 0;
}
// } Driver Code Ends
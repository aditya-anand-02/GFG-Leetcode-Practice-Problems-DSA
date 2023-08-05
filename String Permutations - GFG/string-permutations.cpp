//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    long long fact(string &S)
    {
        int n=S.length();
        long long p=1;
        for(int i=1;i<=S.length();i++)
        {
            p*=i;
        }
        return p;
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> v;
        string A=S;
        long long n=fact(S);
        // next_permutation(A.begin(), A.end());
        v.push_back(A);
        next_permutation(A.begin(), A.end());
        long long i=2;
        while(i<=n)
        {
            v.push_back(A);
            next_permutation(A.begin(), A.end());
            i++;
        }
        sort(v.begin(), v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends
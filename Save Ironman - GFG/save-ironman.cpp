//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool saveIronman(string ch);


int main()
{
    int t,b,c,d,e,f,g,h;
    cin>>t;
    char cc;
    cc = getchar();
    
    while(t--)
    {
        string ch;
        getline(cin,ch);
        
        if(saveIronman(ch)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
}

// } Driver Code Ends



bool saveIronman(string ch)
{
    // Complete the function
    string temp="";
    for(int i=0;i<ch.length();i++)
    {
        if(ch[i]>=65 && ch[i]<=90 || ch[i]>=97 && ch[i]<=122 || ch[i]>=48 && ch[i]<=57)
        {
            temp+=tolower(ch[i]);
        }
        
    }
    string ans=temp;
    reverse(ans.begin(), ans.end());
    for(int i=0;i<temp.length();i++)
    {
        if(ans[i]!=temp[i])
        {
            return false;
        }
    }
    return true;
    
}

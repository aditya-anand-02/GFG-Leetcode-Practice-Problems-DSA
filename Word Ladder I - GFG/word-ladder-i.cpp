//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string start, string target, vector<string>& List) {
        // Code here
          int n=start.size();
       unordered_map<string,int>mp;
       for(auto it:List)mp[it]++;
       queue<string>q;
       unordered_map<string,int>dis;
       dis[start]=1;
       q.push(start);
       while(!q.empty()){
           string st=q.front();
           q.pop();
           for(int j=0;j<n;j++){
               string k=st;
           for(char i='a';i<='z';i++){
               k[j]=i;
               if(mp[k]){
                   q.push(k);
                  if(!dis[k])dis[k]=dis[st]+1;
                   mp[k]--;
                   if(dis[target])return dis[target];
               }
           }
          }
       }
       return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
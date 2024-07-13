//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public: 
	 
	 
	    void traverse(int &n,int currStrLen, string currStr,set<string>&st,vector<bool>&vis,string &S){
	        if(currStrLen==n){
	            st.insert(currStr);
	            return;
	        }
	        
	        for(int i=0;i<n;i++){
	            if(!vis[i]){//not visited 
	                vis[i]=1;
	                currStr+=S[i];
	                traverse(n,currStrLen+1,currStr,st,vis,S);
	                currStr.pop_back();//currstr cha last ele kadne prt
	                vis[i]=0;
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		   int n=S.length();
		   set<string>st;//set will sort in sorted order & unique prmutations
		   vector<bool>vis(n,0);//initilly not visited
		   
		   traverse(n,0,"",st,vis,S);
		   vector<string>ans;
		   for(auto &it:st){
		       ans.push_back(it);
		   }
		   return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue<char> s;
		    string ans;
		    int i=0,c[26]={0};
		    while(i<A.length()){
		        
		        s.push(A[i]);
		        c[A[i]-'a']++;
		        while(!s.empty()){
		            if(c[s.front()-'a']>1)
		                s.pop();
		            else{
		                ans+=s.front();
		                break;
		            }
		        }
		        if(s.empty())
		            ans+="#";
		        i++;
		    }
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    int freq[26]={0};
	    int j=0;
	    for(int i=0;i<S.length();i++){
	        if(freq[S[i]-'a']<1){
	            freq[S[i]-'a']++;
	            S[j++]=S[i];
	        }
	   
	    }
	    S.erase(j);
	    return S;
	}
	
};

// { Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends

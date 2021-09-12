// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    
    int freq[27]={0};
    int i=0,j=0,currm=1;
    int n=S.length();
    while(i<n && j<n){
        
        while(i<n && j<n ){
            if(freq[S[j]-'a']>=1)
                break;
            freq[S[j]-'a']++;
            j++;
        }
        
        currm=max(currm,j-i);
        while(S[i]!=S[j]){
            freq[S[i]-'a']--;
            i++;
        }
        
        freq[S[i]-'a']--;
        i++;
    }
    return currm;
}

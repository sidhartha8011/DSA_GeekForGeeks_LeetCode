// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    
    string Reversee(string arr,int start,int end){
        
        while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
        }
        return arr;
    }
    string reverseWords(string S) 
    { 
        // code here
        int i=0,j=0;

        while(i<S.size())
        {
            while(i<S.size() && S[i]=='.')i++;
            j=i;
            while(i<S.size() && S[i]!='.')
                i++;
            S=Reversee(S,j,i-1);
        }
        S=Reversee(S,0,S.size()-1);
        return S;
    }
    
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends

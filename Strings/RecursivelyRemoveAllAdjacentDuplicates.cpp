// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string remove(string s){
        int l=s.length();
        int i=0;
        int k=0;
       while(i<l-1){
           if(s[i]!=s[i+1])
                s[k++]=s[i];
           else
                while(i<l-1 && s[i]==s[i+1])
                    i++;
            i++;
                
                
       }
      if(s[i]!=s[i-1]){
            s[k++]=s[i];
          }
           s.erase(k);
        if(l==k)
            return s;
           else
            return remove(s);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends

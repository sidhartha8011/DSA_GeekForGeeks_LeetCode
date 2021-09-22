// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{

    public:
    int repeatedStringMatch(string A, string B) 
    {
        // Your code goes here
        string str=A;
        int count=1;
        int n=(B.length()/A.length())+2;
        
        for(int i=0;i<n;i++){
            if(str.find(B)!=-1){
                return count;
            }
            else{
            str+=A;
            count++;
            }
        }
        return -1;
    }
  
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{
    
    public:
    int maxCandy(int h[], int n) 
    { 
        // Your code goes here
        int i=0,j=n-1;
        int ans=0,curr;
        
        while(i<j){
            curr=min(h[i],h[j])*(j-i-1);
            ans=max(ans,curr);
            
            if(h[i]<h[j])
                i++;
            else
                j--;
        }
        
        return ans;
    }   
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int height[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>height[i];
    	}
    	
    	Solution obj;
    	
    	cout << obj.maxCandy(height,n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends

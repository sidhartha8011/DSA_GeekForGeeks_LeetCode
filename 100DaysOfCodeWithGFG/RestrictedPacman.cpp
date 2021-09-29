// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_set>
using namespace std; 

 // } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int candies(int m, int n) 
    { 
    	// Your code goes here
    	int X=(m*n)-m-n;
    	queue<int> q;
    	unordered_set<int> s;
    	q.push(X);
    	int count=1;
            while(!q.empty())
    	    {
    	        int x=q.front();
    	        count++;
    	        if(x-m>1 && s.find(x-m)==s.end()){
    	            q.push(x-m);
    	            s.insert(x-m);
    	        }
    	        if(x-n>1 && s.find(x-n)==s.end()){
    	            q.push(x-n);
    	            s.insert(x-n);
    	        }
    	        q.pop();
    	   }
    
        return count;
    } 
};

// { Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		Solution obj;
		cout << obj.candies(m,n)<<endl; 
	}
	return 0; 
} 



  // } Driver Code Ends

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int a[], int n){
        
        int i,maxs=a[0],low=a[0];
        int sum=0;
        for(i=0;i<n;i++){
            sum+=a[i];
            low=max(low,a[i]);
            if(sum < 0)
                sum=0;
            maxs=max(maxs,sum);
        }
        if(maxs==0)
            return  low;
            
        return maxs;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends

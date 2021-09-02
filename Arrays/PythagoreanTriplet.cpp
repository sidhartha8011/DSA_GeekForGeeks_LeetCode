// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int a[], int n) {
	    // code here
	    for(int i=0;i<n;i++){
	        a[i]*=a[i];
	    }
	    sort(a,a+n);
	    int lo,hi,i;
	    for(i=n-1;i>1;i--){
	        lo=0;
	        hi=i-1;
	        while(lo<hi){
	            int x=a[lo]+a[hi];
	            if(x==a[i])
	                return true;
	            if(x<a[i])
	               lo++;
	            else
	                hi--;
	        }
	    }
	    return false;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

bool compare(Item a,Item b){
    double v1=(double)a.value/a.weight;
    double v2=(double)b.value/b.weight;
    
    return v1>v2;
}


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int x, Item arr[], int n)
    {    double ans=0;
        // added third parameter for sorting order and conditions
        sort(arr,arr+n,compare);
        for(int i=0;i<n;i++){
            if(x>=arr[i].weight){
                ans+=arr[i].value;
                x-=arr[i].weight;
                continue;
            }
            double k=(double)arr[i].value/arr[i].weight;
            ans+=k*x;
            break;
        }
        return ans;
        
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends

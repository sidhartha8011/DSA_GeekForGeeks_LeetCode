// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends

class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int curr;
       int s=0,e=1;
       curr=p[s].petrol-p[s].distance;
       
       while(s!=e || curr<0){
           while(s!=e && curr<0){
               curr-=p[s].petrol-p[s].distance;
               s=(s+1)%n;
               
               if(s==0)
                    return -1;
           }
           curr+=p[e].petrol-p[e].distance;
           e=(e+1)%n;
       }
       return s;
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends

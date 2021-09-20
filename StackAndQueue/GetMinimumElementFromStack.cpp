// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(s.empty())
                return -1;
           
           return s.top()/101;
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop(){
           //Write your code here
           if(s.empty())
                return -1;
            
           int ele=s.top()%101;
           s.pop();
           if(!s.empty())
            minEle=s.top()/101;
           return ele;
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.empty())
                minEle=x;
            else
                minEle=min(x,minEle);
           x=minEle*101+x;
           s.push(x);
           //Write your code here
       }
};

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends

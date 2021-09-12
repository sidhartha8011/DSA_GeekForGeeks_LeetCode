// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int n1=s.length(),n2=x.length();
     int st=-1,j;
     for(int i=0;i<n1-n2+1;i++){
         if(s[i]==x[0]){
             st=i;
             for(j=0;j<n2;j++){
                 if(s[st++]!=x[j])
                    break;
             }
            if(j==n2)
                return i;
         }
     }
     return -1;
}

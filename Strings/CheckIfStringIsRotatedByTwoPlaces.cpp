// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        char ch;
        bool d=0;
        if(str1[2]==str2[0]){
        for(int i=0;i<2;i++){
            ch=str1[0];
            str1=str1.substr(1)+ch;
        }
        if(str1==str2)
            return true;
        d=true;
        }
        int l=str1.length();
        int n=2;
            if(d)
                n=4;
        if(str1[l-n]==str2[0]){
            
            
            for(int i=0;i<n;i++){
                ch=str1[l-1];
                str1=ch+str1.erase(l-1);
            }
            if(str1==str2)
            return true;
        }
        return false;
    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends

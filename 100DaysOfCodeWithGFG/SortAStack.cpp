// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/* The below method sorts the stack s 
you are required to complete the below method */
void sinsert(stack<int> &s,int a){
    if(s.size()==0|| s.top()<a){
        s.push(a);
    }
    else{
        int temp=s.top();
        s.pop();
        sinsert(s,a);
        s.push(temp);
    }
}


void SortedStack :: sort()
{
   //Your code here 
   if(!s.empty()){
       int x=s.top();
       s.pop();
       sort();
       sinsert(s,x);
   }
}

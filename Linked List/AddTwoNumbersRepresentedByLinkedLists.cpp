// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node *rev(Node *head){
        Node *prev=NULL;
        Node *curr=head;
        
        while(curr!=NULL){
            Node* nextptr=curr->next;
            
            curr->next=prev;
            
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }
    
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=rev(first);
        second=rev(second);
        
        int carry=0;
        Node *temp=new Node(-1);
        Node *sum=temp;
        
        while(first!=NULL || second!=NULL){
            int x=(first? first->data:0)+(second?second->data:0)+carry;
            
            carry=x/10;
            x=x%10;
            
            sum->next=new Node(x);
            sum=sum->next;
            sum->next=NULL;
            
           if(first)
                first=first->next;
            if(second)
                second=second->next;
            
        }
 
        if(carry!=0){
            sum->next=new Node(carry);
            sum=sum->next;
        }
        sum->next=NULL;
        temp->next=rev(temp->next);
        return temp->next;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends

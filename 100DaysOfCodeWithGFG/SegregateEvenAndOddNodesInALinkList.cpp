// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        if(head==NULL)
            return head;
        Node* even=new Node(-1);
        Node* ptr1=even;
        Node* odd=new Node(-1);
        Node *ptr2=odd;
        Node *ptr3=head;
        
        even->next=NULL;
        odd->next=NULL;
        
        while(N--)
        {
            if(ptr3->data%2==0){
                even->next=ptr3;
                even=even->next;
            }
            else{
                odd->next=ptr3;
                odd=odd->next;
            }
            
            ptr3=ptr3->next;
            even->next=NULL;
            odd->next=NULL;
            
        }
        even->next=ptr2->next;
        return ptr1->next;
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends

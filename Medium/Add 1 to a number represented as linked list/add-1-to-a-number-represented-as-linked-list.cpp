//{ Driver Code Starts
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
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node* reverse(Node *head)
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *next=NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    Node* addOne(Node *head) 
    {
        head = reverse(head);
        Node *temp = head;
        int carry = (temp->data + 1) / 10;
        temp->data = (temp->data + 1) % 10;
        temp = temp->next;
        Node *prev = head;
        while(temp != NULL){
            temp->data = (temp->data + carry);
            carry = temp->data / 10;
            temp->data = temp->data % 10;
            prev = temp;
            temp = temp->next;
        }
        if(carry > 0){
            Node *last = new Node(carry);
            prev->next = last;
        }
        head = reverse(head);
        return head;
    }
};



//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends
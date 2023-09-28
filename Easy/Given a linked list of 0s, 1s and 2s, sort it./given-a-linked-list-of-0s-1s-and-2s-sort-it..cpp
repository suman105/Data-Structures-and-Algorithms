//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) 
    {
        Node *temp =head;
        int zero=0,one=0,two=0;
        
        while(temp!=NULL)
        {
            if(temp->data == 0)
                ++zero;
            else if(temp->data == 1)
                ++one;
            else
                ++two;
                
            temp = temp->next;
        }
        
        temp = head;
        while(head &&  (one || two || zero)){
            if(zero!=0)
            {
                head->data = 0;
                --zero;
            }
            else if(one!=0)
            {
                head->data = 1;
                --one;
            }
            else
            {
                head->data = 2;
                --two;
            }
               
            
            head = head->next;
        }
        
        return temp;
    }
};




//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends
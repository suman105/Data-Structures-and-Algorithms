//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}



// } Driver Code Ends

class Solution{
  public:
    /*You are required to complete below method */
    int getLeafCount(struct Node* node) 
{ 
    if(node == NULL)     
        return 0; 
    if(node->left == NULL && node->right == NULL) 
        return 1;         
    else
        return getLeafCount(node->left)+ 
            getLeafCount(node->right); 
} 
    
    void mainfunction(Node* root, int k, vector<int> &v)
    {
        if(!root)   return;
        if(!root->left && !root->right){}
        else if(getLeafCount(root)==k)   v.push_back(root->data);
        mainfunction(root->right,k,v);
        mainfunction(root->left,k,v);
    }
    
    vector<int> btWithKleaves(Node *ptr, int k)
    { 
        vector<int> v;
        mainfunction(ptr,k,v);
        if(v.size()==0){
            v.push_back(-1);
            return v;
        }
        reverse(v.begin(),v.end());
        return v;
    }

};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        int k;
        cin>>k;
        getchar();
        
        string s;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution obj;
        vector<int> nodes = obj.btWithKleaves(root,k);
        for(int i = 0;i<nodes.size();i++){
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }
    return 1;
}

// } Driver Code Ends
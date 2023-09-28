//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int> s;
        
        for(int i=0;i<S.length();i++)
        {
            if(S[i]>='0' && S[i]<='9')
                s.push(S[i]-'0');
            else
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                
                switch(S[i])
                {
                    case '+': s.push(a+b);break;
                    case '-': s.push(b-a);break;
                    case '/': s.push(b/a);break;
                    case '*': s.push(a*b);break;
                    case '^': s.push(pow(a,b));break;
                }
            }
        }
        return s.top();
    }
};



//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) 
    {
       int i=0,p=0,s=1;
       if(str[i]=='-'){
           ++i;
           s=-1;
       }
       while(str[i])
       {
           if(!(str[i]-'0'>=0 && str[i]-'0' <=9))
                return -1;
            p = p*10 + (str[i]-'0');
            ++i;
       }
       return s*p;
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
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends
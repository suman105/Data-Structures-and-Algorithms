//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         set<int> s(a,a+n);
         int x=0;
         for(auto i = s.begin() ; i != s.end() ; ++i){
             a[x] = *i;++x;
         }
         if(n < 3)
            return -1;
         else
            return a[n-3];
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends
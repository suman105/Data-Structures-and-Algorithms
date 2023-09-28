//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int ma=INT_MIN,mi=INT_MAX;
    	for(int i=0;i<N;i++){
    	    ma = max(ma,A[i]);
    	    mi = min(mi,A[i]);
    	}
    	return ma+mi;
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
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    long long c=0;
	    int i,j,k;
	    sort(arr,arr+n);
	    for(i=0;i<(n-2);i++)
	    {
	        j = i+1;
	        k = n-1;
	        while(j<k)
	        {
	            if((arr[i]+arr[j]+arr[k]) >= sum)
	                --k;
	            else //if((arr[i]+arr[j]+arr[k]) < sum)
	            {
	                c = c+k-j;
	                ++j;
	            }
	        }
	    }
	    return c;
	}
		 

};



//{ Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
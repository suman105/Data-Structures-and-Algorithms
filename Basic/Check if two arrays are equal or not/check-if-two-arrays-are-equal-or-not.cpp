//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    bool check(vector<ll> A, vector<ll> B, int N)
    {
        multiset<ll> a,b;
        for(auto &x: A)
            a.insert(x);
        for(auto &x: B)
            b.insert(x);
        for(auto i=a.begin(),j=b.begin(); i!=a.end() && j!=b.end() ; ++i,++j)
        {
            if(*i != *j)
                return false;
        }
        return true;
    }
};



//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends

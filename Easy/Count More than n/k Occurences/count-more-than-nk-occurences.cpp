//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) 
    {
        unordered_map<int,int> um;
        
        for(int i=0;i<n;i++)
        {
            if(um.find(arr[i])==um.end())
                um[arr[i]]=1;
            else    
                ++um[arr[i]];
        }
        
        int count=0;
        
        for(auto &x : um)
        {
            if(x.second > (n/k))
                ++count;
        }
        
        return count;
    }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends
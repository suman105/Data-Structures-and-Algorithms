//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{   
public:
    int getPairsCount(int arr[], int n, int sum) 
    {
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
            m[arr[i]]++;
        int twice_count = 0;
        for (int i = 0; i < n; i++) {
            twice_count += m[sum - arr[i]];
            if (sum - arr[i] == arr[i])
                twice_count--;
        }
        return twice_count / 2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends
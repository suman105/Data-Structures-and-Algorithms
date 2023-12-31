//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies,candies+N);
        
        int a=0,b=0;
        int i,j;
        i=0;j=N-1;
        
        while(i<=j)
        {
            a+=candies[i];
            i++;
            j-=K;
        }
        
        i=0;j=N-1;
        
        while(i<=j)
        {
            b+=candies[j];
            --j;
            i+=K;
        }
        
        return {a,b};
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends
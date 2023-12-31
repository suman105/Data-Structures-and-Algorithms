//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int findFrequency(vector<int> v, int x){
    multiset<int> s;
    for(auto i = v.begin() ; i != v.end() ; i++)
        s.insert(*i);
    return s.count(x);
}

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector 
	    vector<int> v;
	        
	    // Taking vector element input
	    for(int i = 0;i<N;i++){
	        int k;
	        cin >> k;
	        v.push_back(k);
	    }
	    
	    // element whose frequency to be find
	    int x;
	    cin >> x;
	    cout << findFrequency(v, x) << endl;
	}
	
	return 0;
}
// } Driver Code Ends
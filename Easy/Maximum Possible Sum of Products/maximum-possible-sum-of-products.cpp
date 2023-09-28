//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long MaxSum(long long int A[], long long int B[], long long int N);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a[n], b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        cout << MaxSum(a, b, n) << endl;
    }
return 0;
}


// } Driver Code Ends

long long MaxSum(long long int A[], long long int B[], long long int N){
    sort(A,A+N);
    sort(B,B+N);
    long long x=0;
    int i;
    for(i=0;i<N;i++){
        x = x + A[i]*B[i];
    }
    return x;
}
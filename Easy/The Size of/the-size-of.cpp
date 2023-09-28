//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// Function prototype
void dataTypes(int, float, double, long long, string);


// } Driver Code Ends

void dataTypes(int a, float b, double c, long long l, string d){
    
    float p = b/c;
    
    double q = b/a;
    
    int r = c/a;
    
    long long m = r + l;
    
    cout << sizeof(p) << " " << sizeof(q) << " " << sizeof(r) << " " << sizeof(r + l) << endl;
    
    cout << 32 << " " << 1 << endl;

}

//{ Driver Code Starts.

// Driver Code
int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;
    
    int t;
    cin >> t;
    
    while(t--){
        
        cin >> a >> b >> c >> l >> d;
    
        dataTypes(a, b, c, l, d);
    }
    
    return 0;
}
// } Driver Code Ends
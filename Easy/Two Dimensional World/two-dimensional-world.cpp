//{ Driver Code Starts
//Initial Template for C++
#include <iostream>
using namespace std;


// } Driver Code Ends

void twoDimensional(int **a,int N){
    
    // Loop to iterate through matrix
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
}

//{ Driver Code Starts.

// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring mat as pointer to pointer
	    int **mat;
	
	    // mat pointer contains array of pointer to array
    	mat = new int*[N];
    	
    	// Taking input to mat[][]
    	for(int i = 0;i<N;i++){
    	    mat[i] = new int[N];
    	}
    	
    	for(int i = 0;i<N;i++){
    	    for(int j = 0;j<N;j++){
    	        cin >> mat[i][j];
    	    }
    	}
    	
    	twoDimensional(mat, N);   
	}
	
	return 0;
}
// } Driver Code Ends
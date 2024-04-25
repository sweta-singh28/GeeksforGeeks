//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    int less = 0;
	    int more = 0;
	    for(int i=0; i<n; i++){
	        if(arr[i]<=x){
	            less++;
	        }
	    }
	        for(int i=0; i<n; i++){
	        if(arr[i]>=x){
	            more++;
	        }
	        }
	        
	   vector<int>ans;
	   ans.push_back(less);
	   ans.push_back(more);
	   return ans;
	   
	   }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends
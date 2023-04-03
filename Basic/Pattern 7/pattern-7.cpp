//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int k=1;k<=n-i;k++)
            cout<<" ";
            for(int k=1;k<=(i-1)*2+1;k=k+1)
            cout<<"*";
            // for(int k=1;k<=n-i;k++)
            // cout<<" ";
            
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
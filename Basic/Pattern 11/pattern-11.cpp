//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int sw=1;
        for(int i=1;i<=n;i++){
            if(i%2==0)
            sw=0;
            else
            sw=1;
            for(int j=1;j<=i;j++){
                cout<<sw<<" ";
                sw=1-sw;
            }
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
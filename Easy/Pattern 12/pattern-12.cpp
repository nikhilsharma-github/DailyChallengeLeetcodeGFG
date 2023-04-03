//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int r=1;r<=n;r++){
            for(int i=1;i<=r;i++){
                cout<<i<<" ";
            }
            for(int k=1;k<=n*2-r*2;k++){
                cout<<"  ";
            }
            for(int i=r;i>=1;i--){
                cout<<i<<" ";
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
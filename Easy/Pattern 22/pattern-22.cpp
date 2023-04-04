//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        for(int r=1;r<=n*2-1;r++){
            for(int c=1;c<=n*2-1;c++){
                int top=r,bottom=n*2-r,left=c,right=n*2-c;
                cout<<n+1-min(right,min(left,min(top,bottom)))<<" ";
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends
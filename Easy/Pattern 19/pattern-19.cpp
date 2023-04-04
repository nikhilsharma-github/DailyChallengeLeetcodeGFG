//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n*2;i++){
            if(i<=n){
                for(int s=1;s<=n-i+1;s++)
                cout<<"*";
                for(int k=1;k<=(i-1)*2;k++)
                cout<<" ";
                for(int s=1;s<=n-i+1;s++)
                cout<<"*";
            }
            else{
                 for(int s=1;s<=i-n;s++)
                cout<<"*";
                for(int k=1;k<=(n*2-i)*2;k++)
                cout<<" ";
                for(int s=1;s<=i-n;s++)
                cout<<"*";
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
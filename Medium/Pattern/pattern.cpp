//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        for(int i=1;i<=n*2;i++){
            if(i<=n){
                for(int s=1;s<=n-i;s++)
                cout<<" ";
                for(int p=1;p<=i;p++)
                cout<<"* ";
                // for(int s=1;s<=n-i;s++)
                // cout<<" ";
            }
            else{
                for(int s=1;s<=i-1-n;s++)
                cout<<" ";
                for(int p=1;p<=n*2+1-i;p++)
                cout<<"* ";
                // for(int s=1;s<=n-i;s++)
                // cout<<" ";
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends
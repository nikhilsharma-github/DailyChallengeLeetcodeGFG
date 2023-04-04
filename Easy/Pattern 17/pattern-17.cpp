//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            char c='A';
            for(int sp=1;sp<=n-i;sp++)
            cout<<" ";
            for(int st=1;st<=i*2-1;st=st+1){
            cout<<c;
            if(st<=((i*2)-1)/2)
                c++;
            else
                c--;
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
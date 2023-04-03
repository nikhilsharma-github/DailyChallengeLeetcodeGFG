//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        for(int i=1;i<=n*2-1;i++){
            if(i<=n){
                for(int k=1;k<=i;k++){
                    cout<<"* ";
                }
            }
            else{
                for(int k=n*2-i;k>=1;k--){
                    cout<<"* ";
                }
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
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        vector<int> freq(26,0);
        for(char c:a){
            freq[c-'a']++;
        }
        for(char c:b){
            freq[c-'a']--;
        }
        
        for(int v:freq){
            if(v!=0)
            return false;
        }
        return true;
}

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends
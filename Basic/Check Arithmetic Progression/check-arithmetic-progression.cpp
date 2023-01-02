//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        unordered_map<int,int> mp;
        int smallest=INT_MAX,second_smallest=INT_MAX;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            if(arr[i]<smallest){
                second_smallest=smallest;
                smallest=arr[i];
            }
            else if(arr[i]<second_smallest){
                second_smallest=arr[i];
            }
            else if(smallest!=arr[i]&&arr[i]<second_smallest){
                second_smallest=arr[i];
            }
        }
        int diff=second_smallest-smallest;
        int val=smallest;
        for(int i=0;i<n;i++){
            if(mp.find(val)==mp.end())
            return false;
            
            val=val+diff;
        }
        
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
         (ob.checkIsAP(arr, n))? (cout << "YES" << endl) :
                       (cout << "NO" << endl);   
    }
 
  return 0;
}

// } Driver Code Ends
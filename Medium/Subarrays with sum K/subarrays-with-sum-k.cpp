//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0,total=0;
        for(int i=0;i<N;i++){
            sum=sum+Arr[i];
            
            if(mp.find(sum-k)!=mp.end()){
                total=total+mp[sum-k];
            }
            if(mp.find(sum)!=mp.end()){
                mp[sum]++;
            }
            else{
                mp[sum]=1;
            }
            
        }
        
        return total;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends
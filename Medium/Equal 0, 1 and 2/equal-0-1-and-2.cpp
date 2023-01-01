//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
            
class Solution {
  public:   
    long long getSubstringWithEqual012(string str) {
        long long totalsa=0;
        int zero=0,one=0,two=0;
        unordered_map<string,int> mp;
        string q=to_string(one-zero)+"#"+to_string(two-one);
        mp[q]=1;
        for(int i=0;i<str.size();i++){
            if(str[i]=='0')
            zero++;
            if(str[i]=='1')
            one++;
            if(str[i]=='2')
            two++;
            
            q=to_string(one-zero)+"#"+to_string(two-one);
            if(mp.find(q)==mp.end()){
                mp[q]=1;
            }
            else{
                totalsa=mp[q]+totalsa;
                mp[q]++;
            }
        }
        
        return totalsa;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.getSubstringWithEqual012(s)<<endl;
	}
    return 0;
}

// } Driver Code Ends
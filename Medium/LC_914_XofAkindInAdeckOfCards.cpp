class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;
        for(int v:deck){
            mp[v]++;
        }
        int gcdval=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            gcdval=__gcd(gcdval,it->second);
        }
        // cout<<gcdval<<endl;

        return gcdval>=2;
    }
};
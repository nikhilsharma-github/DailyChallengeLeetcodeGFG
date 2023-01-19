class Solution {
public:
    int subarraysDivByK(vector<int>& nums
    , int k) {
    int total=0;
    int sum=0;
    unordered_map<int,int> mp;
    mp[0]=1;
    for(int v:nums){
        sum=sum+v;
        int remainder=sum%k;
        if(remainder<0){
            remainder=remainder+k;
        }
        if(mp.find(remainder)==mp.end()){
            mp[remainder]=1;
        }
        else{
            total+=mp[remainder];
            mp[remainder]++;
        }
    }

    return total;    
    }
};
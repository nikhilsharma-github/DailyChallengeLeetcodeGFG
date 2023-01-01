https://leetcode.com/problems/subarray-sum-equals-k/submissions/869196292/

class Solution {
public:
    int subarraySum(vector<int>& nums,
     int k) {
        unordered_map<int,int> mp;
        int sumTillNow=0;
        int totalSubarrays=0;
        mp[0]=1;
        for(int v:nums){
            sumTillNow+=v;
            if(mp.find(sumTillNow-k)
            !=mp.end()){
                totalSubarrays+=
                mp[sumTillNow-k];
            }
            if(mp.find(sumTillNow)
            !=mp.end()){
                mp[sumTillNow]++;

            }
            else{
                mp[sumTillNow]=1;
            }
        }

        return totalSubarrays;
    }
};
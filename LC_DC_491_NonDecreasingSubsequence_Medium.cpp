class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(vector<int> &nums,int idx, vector<int> temp){
        if(temp.size()>1){
            ans.push_back(temp);
        }

        unordered_set<int> s;
        for(int i=idx;i<nums.size();i++){
            int curr=nums[i],prev=temp.size()>0?temp[temp.size()-1]:-101;

            if(s.find(curr)==s.end()&&curr>=prev){
                temp.push_back(curr);
                solve(nums,i+1,temp);
                temp.pop_back();
                s.insert(curr);
            }
        }

        return;
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> temp;
        solve(nums,0,temp);
        return ans;    
    }
};
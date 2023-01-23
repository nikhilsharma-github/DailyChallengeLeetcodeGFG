class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> data(n+1,0);
        for(auto v:trust){
            data[v[0]]--;
            data[v[1]]++;
        }

        for(int i=1;i<=n;i++){
            int v=data[i];
            if(v==n-1)
            return i;
        }

        return -1;
    }
};
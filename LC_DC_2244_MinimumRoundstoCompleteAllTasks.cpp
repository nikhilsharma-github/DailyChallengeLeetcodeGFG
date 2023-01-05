class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        int rounds=0;
        for(int v:tasks){
            mp[v]++;
        }

        for(auto it=mp.begin();it!=mp.end();it++){
            int freq=it->second;
            
            if(freq==1)
            return -1;

            if(freq%3==0){
            rounds=rounds+freq/3;LC_DC
            }
            else if(freq%3==1){
                int tv=freq/3;
                rounds=rounds+(tv)-1+2;
            }
            else if(freq%3==2){
                rounds=rounds+(freq/3)+1;
            }

        }

        return rounds;

    }
};
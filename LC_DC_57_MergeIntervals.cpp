class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        stack<pair<int,int>>st;
        st.push({intervals[0][0],intervals[0][1]});

        for(int i=1;i<intervals.size();i++){
                if(intervals[i][0]<=st.top().second){
                st.top().second=max(st.top().second,intervals[i][1]);
            }
            else{
                st.push({intervals[i][0],intervals[i][1]});
            }
        }
        vector<vector<int>>vectemp;
        while(!st.empty()){
            vector<int>vec;
            vec.push_back(st.top().first);
            vec.push_back(st.top().second);
            vectemp.push_back(vec);
            st.pop();
        }
        reverse(vectemp.begin(),vectemp.end());
        return vectemp;
    }
};
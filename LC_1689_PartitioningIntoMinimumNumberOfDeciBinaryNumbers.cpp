class Solution {
public:
    int minPartitions(string k) {
        int mn=INT_MIN;
        for(char c:k){
            mn=max(mn,c-'0');
        }
        return mn;
    }
};
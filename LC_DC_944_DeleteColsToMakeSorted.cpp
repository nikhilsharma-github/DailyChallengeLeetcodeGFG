class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int delcols=0;
        int sl=strs[0].size();
        int ts=strs.size();

        if(ts==1){
            return 0;
        }

        for(int c=0;c<sl;c++){
            
            for(int r=1;r<ts;r++){
                if(strs[r-1][c]>strs[r][c]){
                    delcols++;
                    break;
                }
            }
        
        }

        return delcols;
    }
};
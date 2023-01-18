class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size(),arrsum=0;

        int maxsumsubarray=INT_MIN,minsumsubarray=INT_MAX;
        int currminsumsubarray=0,currmaxsumsubarray=0;
        for(int i=0;i<n;i++){
            arrsum+=nums[i];
            currminsumsubarray+=nums[i];
            currmaxsumsubarray+=nums[i];

            maxsumsubarray=max(maxsumsubarray,currmaxsumsubarray);
            minsumsubarray=min(minsumsubarray,currminsumsubarray);

            if(currmaxsumsubarray<0)
            currmaxsumsubarray=0;

            if(currminsumsubarray>0)
            currminsumsubarray=0;
            
        }
        if(arrsum==minsumsubarray)
        return maxsumsubarray;
        else
        return max(maxsumsubarray,arrsum-minsumsubarray);
    }
};
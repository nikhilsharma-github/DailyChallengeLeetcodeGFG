class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas=0,totalCost=0,n=gas.size(),minidx=-1,minval=INT_MAX;
        vector<int> diff(n,0);
        vector<int> prefix(n,0);


        for(int i=0;i<n;i++){
            diff[i]=gas[i]-cost[i];
            totalGas+=gas[i];
            totalCost+=cost[i];
        }
        if(totalGas<totalCost)
        return -1;
        
        for(int i=0;i<n;i++){
            if(i==0){
            prefix[i]=diff[i];
            continue;
            }
            prefix[i]=prefix[i-1]+diff[i];
        }

        for(int i=0;i<n;i++){
            if(prefix[i]<minval){
                minval=prefix[i];
                minidx=i;
            }
        }

        minidx+=1;
        minidx=minidx%n;
        return minidx;
    }
};
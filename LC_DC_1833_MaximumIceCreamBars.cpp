class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int moves=0;
        sort(costs.begin(),costs.end());
        for(int v:costs){
            if(coins<v){
                return moves;
            }
            if(coins-v>=0){
                coins=coins-v;
                moves++;
            }
        }

        return moves;
    }
};
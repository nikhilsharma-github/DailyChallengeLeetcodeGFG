class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxPoints=2;
        int n=points.size();
        if(n<=2)
        return n;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int pointsOnLine=2;
                for(int k=0;k<n;k++){
                    if(k!=i&&k!=j){
                        if(
                        (points[k][1]-points[i][1])*
                        (points[j][0]-points[k][0])
                        ==
                        (points[k][0]-points[i][0])*
                        (points[j][1]-points[k][1])
                        )
                        // if(
                        // (points[j][1]-points[i][1])*
                        // (points[i][0]-points[k][0])
                        // ==
                        // (points[i][1]-points[k][1])*
                        // (points[j][0]-points[i][0])
                        // )
                        pointsOnLine++;
                    }
                }
                maxPoints=max(maxPoints,pointsOnLine);
            }
        }

        return maxPoints;
    }
};
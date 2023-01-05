class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        long long n=points.size(),b=0;
        sort(points.begin(),points.end());
        stack<pair<long long,long long>> st;
        st.push({points[0][0],points[0][1]});

        for(long long i=1;i<n;i++){
            long long afirst=points[i][0];
            long long asecond=points[i][1];
            long long sfirst=st.top().first;
            long long ssecond=st.top().second;
            
            if(ssecond<afirst){
                st.push({afirst,asecond});
                continue;
            }
            else if(ssecond>=afirst){
                if(asecond<=ssecond){
                    b++;
                    st.pop();
                    st.push({afirst,asecond});
                    continue;
                }
                else{
                    b++;
                    st.pop();
                    st.push({afirst,ssecond});
                    continue;
                }
            }
        }
        // cout<<"B: "<<b<<endl;

        return points.size()-b;
    }
};
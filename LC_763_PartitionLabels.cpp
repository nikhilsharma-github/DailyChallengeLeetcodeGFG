class Solution {
public:
    vector<int> partitionLabels(string s) {
        int result=0;
        map<char,pair<int,int>> mp;
        vector<pair<int,int>> vp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]].first=i;
            }
            else{
                mp[s[i]].second=i;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
           
            pair<int,int> p=it->second;
            // cout<<it->first<<endl;
            // cout<<p.first<<" "<<p.second<<endl;
            vp.push_back({p.first,p.second});
            // cout<<it->first<<" "<<endl;
        }

        // for(auto p:vp){
        //     cout<<p.first<<" "<<p.second<<endl;
        // }

        sort(vp.begin(),vp.end());
        stack<pair<int,int>> st;
        vector<int> x;
        st.push({vp[0].first,vp[0].second});

        for(int i=1;i<vp.size();i++){
            int sfirst=st.top().first;
            int ssecond=st.top().second;
            int afirst=vp[i].first;
            int asecond=vp[i].second;

            if(ssecond<afirst){
                st.push({afirst,asecond});
            }
            else if(afirst<=ssecond){
                if(asecond==0||asecond<=ssecond){
                    continue;
                }
                else if(asecond>ssecond){
                    st.pop();
                    st.push({sfirst,asecond});
                }
            }
        }

        while(st.size()){
            pair<int,int> p=st.top();
            st.pop();
            // cout<<p.first<<" "<<p.second<<endl;
            if(p.second==0){
                x.push_back(1);
            }
            else{
            result=(p.second-p.first)+1;
            x.push_back(result);
            }
        }
        reverse(x.begin(),x.end());

        return x;

    }
};
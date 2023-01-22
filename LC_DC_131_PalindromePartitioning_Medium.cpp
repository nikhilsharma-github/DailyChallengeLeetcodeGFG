class Solution {
public:
    vector<vector<string>> ans;
    bool isPalindrome(string s){
        int l=0,r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r])
            return false;

            l++,r--;
        }
        return true;
    }
    void sol(string str,string asf,vector<string> &vec){
        if(str.length()==0){
            // vec.push_back(asf);
            ans.push_back(vec);
            return;
        }

        for(int i=0;i<str.size();i++){
            string prefix=str.substr(0,i+1);
            string ros=str.substr(i+1);
            if(isPalindrome(prefix)){
                vec.push_back(prefix);
                sol(ros,"",vec);
                vec.pop_back();
            }
        }
        return;
    }
    vector<vector<string>> partition(string s) {
        vector<string> vec;
        sol(s,"",vec);
        return ans;
    }
};
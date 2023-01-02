class Solution {
public:
    bool detectCapitalUse(string word) {
        int lower=0,upper=0,firstuppercase=false,n=word.size();
        for(int i=0;i<n;i++){
            char c=word[i];
            if(c>='a'&&c<='z'){
                lower++;
            }
            if(c>='A'&&c<='Z'){
                if(i==0)
                firstuppercase=true;
                upper++;
            }
        }
        if((lower==n&&upper==0)||
        (lower==0&&upper==n)||
        (lower==n-1&&upper==1&&firstuppercase==true)){
            return true;
        }
        else{
            return false;
        }
    }
};
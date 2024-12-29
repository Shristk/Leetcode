class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.size()==0) return s.size()==0;
        if(s.size()==0){
            if(p.size()%2!=0) return false;
            for(int i=1;i<p.size();i+=2){
                if(p[i]!='*') return false;
            }
            return true;
        }
        bool first_match = (p[0]=='.' || p[0]==s[0]);
        if(p.size()>=2 && p[1]=='*'){
            return (first_match && isMatch(s.substr(1),p)) || isMatch(s,p.substr(2));
        }
        else{
                return first_match && isMatch(s.substr(1),p.substr(1));
            }
    }
};

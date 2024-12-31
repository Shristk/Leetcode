class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string prev = countAndSay(n-1);
        stringstream ss;
        for(int i=0;i<prev.length();i++){
            int count =1;
            while(i+1<prev.length() && prev[i]==prev[i+1]){
                i++;
                count++;
            }
            ss<<count<<prev[i];
        }
        return ss.str();
    }
};

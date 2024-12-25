class Solution {
public:
    vector<vector<int>> ans;
    void recur(vector<int>& candidates,int target, int cur, vector<int> v, int cursum){
        if(cursum>target || cur == candidates.size()) return;
        if(cursum==target){
            ans.push_back(v);
            return;
        }
        recur(candidates,target,cur+1,v,cursum);
        v.push_back(candidates[cur]);
        recur(candidates,target,cur,v,cursum+candidates[cur]);
        v.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        recur(candidates,target, 0,{},0);
        return ans;
    }
};

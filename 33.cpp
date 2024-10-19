class Solution {
public:
    int search(vector<int>& nums, int target) {
        int p = 0;
        for(int i :nums){
            if(i==target){
                return p;
            }
            p++;
        }
        return -1;
    }
};

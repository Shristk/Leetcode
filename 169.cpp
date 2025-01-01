class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size(), newnums = nums[0], count = 1;
        for (auto i = 1; i < len; i++) {
            if (nums[i] == newnums)
                count++;
            else
                count--;
            if (count == 0) {
                newnums = nums[i];
                count = 1;
            }
        }
        return newnums;
    }
};

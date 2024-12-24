class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int sum = nums[0]+nums[1]+nums[2];
        int diff = INT_MAX;
        for(int i=0;i<n-2;i++){
            int left = i+1;
            int right = n-1;
            while(left<right){
                int nsum = nums[i]+nums[left]+nums[right];
                if(nsum==target)
                return target;
                if(nsum<target)
                left++;
                else
                right--;
                int diffTarget = abs(nsum-target);
                if(diffTarget<diff){
                sum=nsum;
                diff = diffTarget;
                }
            }
        }
        return sum;   
    }
};

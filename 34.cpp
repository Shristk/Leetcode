class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int firstindex = firstposition(nums,target);
        int lastindex = lastposition(nums,target);
        result.push_back(firstindex);
        result.push_back(lastindex);
        return result;
    }
    int firstposition(vector<int>& nums, int target){
        int mid;
        int left = 0;
        int right = nums.size()-1;
        int position = -1;
        while(left<=right){
            mid=(left+right)/2;
            if(nums[mid]==target){
                position=mid;
                right=mid-1;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return position;
    }
    int lastposition(vector<int>& nums, int target){
        int mid;
        int left = 0;
        int right = nums.size()-1;
        int position = -1;
        while(left<=right){
            mid=(left+right)/2;
            if(nums[mid]==target){
                position=mid;
                left=mid+1;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return position;
    }
};

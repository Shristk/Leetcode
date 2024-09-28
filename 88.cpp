class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int temp;
        if(n!=0){
            for(int i=0;i<n;++i)
            {
                temp=nums2[i];
                nums1[m+i]=temp;
            }
            sort(nums1.begin(),nums1.end());
        }
    }
};

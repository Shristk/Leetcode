class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i,j=0,0
        while i< len(nums):
            if nums[i]!= val and i==j:
                i+=1
                j+=1
            elif nums[i]==val:
                i+=1
            else:
                nums[i],nums[j]=nums[j],nums[i]
                i+=1
                j+=1
        return j

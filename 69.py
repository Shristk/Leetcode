class Solution:
    def mySqrt(self, x: int) -> int:
        lb=1
        up=x
        while lb<=up:
            mid = (lb+up)//2
            if mid*mid==x:
                return mid
            elif mid*mid >x:
                up=mid-1
            else:
                lb=mid+1
        return up
        

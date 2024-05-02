class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        nums=sorted(nums, reverse=True)
        ans=0
        for i in nums:
            if(-i in nums):
                ans=i
                break
        else:
            return -1
        return ans
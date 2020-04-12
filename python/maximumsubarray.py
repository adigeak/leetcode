class Solution:
    def anypos(nums):
        for i in nums:
            if not i<0:
                return True
        return False

    def findsub(nums):
        s = 0
        ans = 0
        for i in nums:
            if s + i > 0:
                s += i
            else:
                s = 0
            ans = max(ans,s)
        return ans

    def maxSubArray(self, nums: List[int]) -> int:
        if(Solution.anypos(nums)):
            return Solution.findsub(nums)
        else:
            return max(nums)

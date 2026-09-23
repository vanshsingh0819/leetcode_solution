class Solution(object):
    def minOperations(self, nums, x):
        n = len(nums)
        sum = 0
        for i in range(n):
            sum += nums[i]
        diff = sum - x
        if diff == 0:
            return n
        if diff < 0:
            return -1   

        l = 0 
        maxi = -1
        curr = 0
        for r in range(n):
            curr += nums[r]
            while curr > diff:
                curr -= nums[l]
                l=l+1
            if curr == diff:
                maxi = max(maxi,r-l+1)
        if maxi == -1:
            return -1
        ans = n - maxi
        return ans
        
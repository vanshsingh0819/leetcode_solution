class Solution(object):
    def smallestIndex(self, nums):
        n = len(nums)
        for i in range(n):
            sum = 0
            number = nums[i]
            while(number > 0):
                digit = number % 10
                number = number/10
                sum += digit
            if sum == i:
                return i
        return -1

        """
        :type nums: List[int]
        :rtype: int
        """
        
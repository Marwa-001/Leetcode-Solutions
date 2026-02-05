class Solution(object):
    def constructTransformedArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        result = [0] * len(nums)
        right,left=0,0
        for i, num in enumerate(nums):
            if num > 0:
                right = (i + num) % len(nums)
                result[i]=nums[right]
            elif num < 0:
                left = (i + num) % len(nums)
                result[i]= nums[left]
            else:
                result[i]=num
        return result
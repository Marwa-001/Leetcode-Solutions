class Solution(object):
    def arrangeCoins(self, n):
        """
        :type n: int
        :rtype: int
        """
            
        left = 1
        right = n
        
        while(left<=right):
            mid = left +(right-left)/2
            currSum = mid * (mid + 1) // 2
            
            if currSum == n:
                return mid
            
            if n < currSum:
                right = mid - 1
            else:
                left = mid + 1
        return right
        
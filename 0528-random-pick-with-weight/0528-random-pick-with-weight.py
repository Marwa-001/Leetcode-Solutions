import random

class Solution(object):

    def __init__(self, w):
        """
        :type w: List[int]
        """
        # We process the weights ONCE and save them to the object (self)
        self.prefix_sums = []
        current_sum = 0
        for weight in w:
            current_sum += weight
            self.prefix_sums.append(current_sum)
        
        self.total_sum = current_sum

    def pickIndex(self):
        """
        :rtype: int
        """
        # 1. Get our random target based on the pre-calculated total
        target = random.randint(1, self.total_sum)

        # 2. Binary Search to find the index
        left, right = 0, len(self.prefix_sums) - 1
        ans = -1

        while left <= right:
            mid = left + (right - left) // 2
    
            if self.prefix_sums[mid] >= target:
                # This range contains our target, but check for smaller index
                ans = mid
                right = mid - 1
            else:
                # Target is further to the right
                left = mid + 1

        return ans
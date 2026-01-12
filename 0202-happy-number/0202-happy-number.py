class Solution(object):
    def isHappy(self, n):
        seen = set()
        
        # Continue until n becomes 1 (Happy) or we hit a cycle (Not Happy)
        while n != 1:
            if n in seen:
                return False
            seen.add(n)
            
            # Calculate the sum of squares of digits
            current_sum = 0
            while n > 0:
                digit = n % 10
                current_sum += digit ** 2
                n //= 10  # Use floor division
            
            n = current_sum
            
        return True
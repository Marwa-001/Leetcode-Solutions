class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """

        # Define the 32-bit signed integer boundaries
        MIN_VAL = -2**31
        MAX_VAL = 2**31 - 1
        
        # Determine the sign and work with the absolute value
        # This avoids the C++/Python difference in modulo (%) logic
        sign = -1 if x < 0 else 1
        x = abs(x)
        
        reversed_num = 0
        while x != 0:
            # Extract the last digit
            digit = x % 10
            x //= 10 # Integer division
            
            # Check for overflow BEFORE updating reversed_num
            # Since we are working with absolute values, we only check MAX_VAL
            if reversed_num > (MAX_VAL - digit) // 10:
                return 0
                
            reversed_num = (reversed_num * 10) + digit
            
        # Re-apply the sign
        result = sign * reversed_num
        
        return result
        
class Solution(object):
    def addStrings(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        i = len(num1) - 1
        j = len(num2) - 1
        carry = 0
        result = []
        current_sum=0
        while i >= 0 or j >= 0 or carry > 0:
            if i>=0:
                val1 = int(num1[i])
            else:
                val1=0
            if j>=0:
                val2 = int(num2[j])
            else:
                val2=0  
            # val1 = (i >= 0) ? num1[i] : 0
            # val2 = (j >= 0) ? num2[j] : 0
            
            current_sum = val1 + val2 + carry
            carry = current_sum // 10
            result.append(str(current_sum % 10))
            
            i -= 1
            j -= 1

        return "".join(result[::-1])
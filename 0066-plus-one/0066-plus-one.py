class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        length = len(digits)
        # print(length)
        i = length -1
        plus=1
        for index, dig in enumerate(digits[::-1]):
            # print(index, dig)
            if(dig==9 and plus==1):
                digits[i]=0
            elif plus==1:
                digits[i]+=1
                plus=0
            i=i-1
        if plus == 1:
            return [1] + digits
        return digits      
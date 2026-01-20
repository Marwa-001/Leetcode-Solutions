class Solution(object):
    def checkPerfectNumber(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num<=1:
            return False
        sum=1
        for i in range(2,int(num**0.5+1)):
            if(num%i==0):
                print(sum, i)
                sum+=i
                if(i != num//i):
                    sum+=num//i
            if sum>num:
                return False
        if sum<num:
            return False
        return True
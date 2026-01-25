class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n<2:
            return n
        a, b = 0,1
        for i in range(n-1):
            temp=b
            b=a+b
            a=temp
        return b
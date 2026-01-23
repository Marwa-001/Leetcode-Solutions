class Solution(object):
    def mirrorDistance(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n<10:
            return 0
        reverse_list=[]
        original=n
        reversed=0
        while n!=0:
            reverse_list.append(n%10)
            n=n/10
        reversed="".join(map(str, reverse_list))
        return abs(original-int(reversed))
        
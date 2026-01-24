class Solution(object):
    def convertToBase7(self, num):
        """
        :type num: int
        :rtype: str
        """
        is_neg=0 
        if num==0:
            return "0"
        if(num<0):
            is_neg=1
            num=abs(num)
        new=[]
        while(num>6):
            new.insert(0,num%7)
            num=num//7
        if num!=0:
            new.insert(0,num)
        if is_neg:
            new.insert(0,'-')
        # print(new)
        
        return "".join(map(str,new))
        
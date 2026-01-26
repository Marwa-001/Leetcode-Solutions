class Solution(object):
    def minimumAbsDifference(self, arr):
        """
        :type arr: List[int]
        :rtype: List[List[int]]
        """
        arr.sort()
        min=2**31-1
        ans=[]
        for num in range(len(arr)-1):
            print(num)
            if arr[num+1]-arr[num] < min:
                min = arr[num+1]-arr[num]
                print(min)
        for num in range(len(arr)-1):
            if arr[num+1]-arr[num] == min:
                ans.append([arr[num], arr[num+1]])
        return ans
        
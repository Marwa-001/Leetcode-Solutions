class Solution(object):
    def constructRectangle(self, area):
        """
        :type area: int
        :rtype: List[int]
        """
        w=1
        w=int(area**0.5)
        # print(w)
        while area % w != 0:
            w -= 1
        return [area // w, w]
        
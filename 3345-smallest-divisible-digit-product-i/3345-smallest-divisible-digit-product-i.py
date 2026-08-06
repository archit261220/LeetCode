class Solution(object):
    def multi(self,n):
        ans=1
        while(n>0):
            ans=ans*(n%10)
            n=n/10
        return ans

    def smallestNumber(self, n, t):
        while(n>0):
            d=self.multi(n)
            if d%t==0:
                return n
            else:
                 n=n+1
        return -1
        
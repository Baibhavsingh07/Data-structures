class Solution:
    def climbStairs(self, n: int) -> int:
        a=1
        s=0
        b=2
        c=3
        if(n==0):
            return 0
        if(n==1):
            return 1
        if(n==2):
            return 2
        for i in range(3,n+1):
            s=a+b
            a=b
            b=s
        return s
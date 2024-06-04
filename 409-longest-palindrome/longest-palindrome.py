class Solution:
    def longestPalindrome(self, s: str) -> int:
        s=list(s)
        l=set(s)
        c=0
        flag =0
        for i in l:
            a=s.count(i)
            if(a%2==0):
                c+=a
            else:
                flag=1
                c+=a-1
        if(flag==1):
            return c+1
        else:
            return c

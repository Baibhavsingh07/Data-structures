class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        d={}
        for i in arr:
            if(i in d):
                d[i]+=1
            else:
                d[i]=1
        l=list(d.values())
        if(len(l)==len(set(l))):
            return True
        return False
        
class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        tem=set(J)
        out=0
        for i in S:
            if i in tem:
                out+=1
        return out

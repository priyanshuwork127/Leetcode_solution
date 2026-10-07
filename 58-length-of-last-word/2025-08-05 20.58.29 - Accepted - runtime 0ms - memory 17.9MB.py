class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.split()
        a=len(s[-1])
        return a
Obj=Solution()
result=Obj.lengthOfLastWord("Hello World")
print(result)
        
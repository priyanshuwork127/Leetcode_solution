class Solution:
    def isPalindrome(self, x: int) -> bool:
        a=list(str(x))
        a.reverse()
        return list(str(x)) == a
obj=Solution()
result=obj.isPalindrome(121)
        
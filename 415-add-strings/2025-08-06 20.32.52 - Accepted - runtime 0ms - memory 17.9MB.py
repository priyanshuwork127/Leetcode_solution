import sys
sys.set_int_max_str_digits(10000)
class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        n1=int(num1)
        n2=int(num2)
        s=n1+n2
        s1=str(s)
        return s1
obj=Solution()
result=obj.addStrings("11","123")
print(result)
        
class Solution:
    def capitalizeTitle(self, title: str) -> str:
        l=[]
        a=title.split(" ")
        for i in a:
            if len(i)>2:
                x=i.lower()
                a=x.capitalize()
                l.append(a)
            else:
                b=i.lower()
                l.append(b)
        j=" ".join(l)
        return j
obj=Solution()
result=obj.capitalizeTitle("capiTLIze tHe titLe")
print(result)



        
class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        INTERSECTION=list(set(nums1) & set(nums2))    #DONT USE and always use &
        return INTERSECTION
obj=Solution()
Result=obj.intersection([4,9,5],[9,4,9,8,4])
print(Result)

        
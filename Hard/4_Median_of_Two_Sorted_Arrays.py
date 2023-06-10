class Solution:
    def mergeSort(self, arr) -> list:
        if len(arr) > 1:
            mid = len(arr)//2
    
            L = arr[:mid]
            R = arr[mid:]
            self.mergeSort(self, L)
            self.mergeSort(self, R)
    
            i = j = k = 0
    
            while i < len(L) and j < len(R):
                if L[i] <= R[j]:
                    arr[k] = L[i]
                    i += 1
                else:
                    arr[k] = R[j]
                    j += 1
                k += 1
    
            while i < len(L):
                arr[k] = L[i]
                i += 1
                k += 1
    
            while j < len(R):
                arr[k] = R[j]
                j += 1
                k += 1
        return arr
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        nums3 = nums1 + nums2
        print(nums3)
        nums3 = self.mergeSort(self, nums3)
        print(nums3)
        fullLength = len(nums3)
        mid:int = fullLength/2
        
        
        if fullLength % 2 != 0 :
            return nums3[int(mid)]
        else :
            mid:int = fullLength/2
            return (nums3[int(mid)-1]+nums3[int(mid)]) / 2
    
s21 = Solution

ans = s21.findMedianSortedArrays(s21, [], [1])

print(ans)
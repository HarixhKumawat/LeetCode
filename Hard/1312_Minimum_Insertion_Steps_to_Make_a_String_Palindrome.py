"""Given a string s. In one step you can insert any character at any index of the string.
Return the minimum number of steps to make s palindrome.
A Palindrome String is one that reads the same backward as well as forward.
"""

# class Solution:
#     def minInsertions(self, s: str) -> int:
#         thedict = {}
#         toChange = 0
#         for char in s:
#             i = thedict.get(char)
#             if(i) :
#                 i = int(i) + 1
#                 thedict.update({char: i})
#                 continue

#             thedict.update({char: 1})

#         print(thedict)

#         for dict in thedict :
#             if thedict.get(dict) % 2 != 0 :
#                 print("uff")
#                 toChange = int(toChange) + 1
#         return toChange - 1
    
# import sys

# class Solution:
#     def minInsertions(self, s: str) -> int:
#         def longestPlanindroSubs(self, s) :
#             n = len(s)
#             dp = [0] * n
#             dpPrev = [0] * n

#             for start in range(n - 1, -1, -1):
#                 dp[start] = 1
        
#         return self.palnin(self, s, 0, len(s) - 1);

# sl = Solution

# change = sl.minInsertions(sl, "apple")

# print(change)

class Solution:
    def minInsertions(self, s:str) :
        n = len(s)
        dp = [0] * n
        dpPrev = [0] * n
        for start in range(n - 1, -1, -1):
            dp[start] = 1
            for end in range(start + 1, n):
                if s[start] == s[end]:
                    dp[end] = dpPrev[end - 1] + 2
                else:
                    dp[end] = max(dpPrev[end], dp[end - 1])
            dpPrev = dp.copy()
        return n - dp[n - 1]
    

s21 = Solution
ans = s21.minInsertions(s21, "leetcode")

print("*" *25, ans)
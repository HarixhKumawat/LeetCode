# A program was supposed to print an array of integers. The program forgot to print whitespaces and the array is printed as a string of digits s and all we know is that all integers in the array were in the range [1, k] and there are no leading zeros in the array.

# Given the string s and the integer k, return the number of the possible arrays that can be printed as s using the mentioned program. Since the answer may be very large, return it modulo 109 + 7.

 

# Example 1:

# Input: s = "1000", k = 10000
# Output: 1
# Explanation: The only possible array is [1000]
# Example 2:

# Input: s = "1000", k = 10
# Output: 0
# Explanation: There cannot be an array that was printed this way and has all integer >= 1 and <= 10.
# Example 3:

# Input: s = "1317", k = 2000
# Output: 8
# Explanation: Possible arrays are [1317],[131,7],[13,17],[1,317],[13,1,7],[1,31,7],[1,3,17],[1,3,1,7]
 

# Constraints:

# 1 <= s.length <= 105
# s consists of only digits and does not contain leading zeros.
# 1 <= k <= 109

class Solution:
    def dfs(self, s, k, i, dp) -> int:
        if i == len(s) :
            return 1
        if s[i] == "0" :
            return 0
        if dp[i] != -1 :
            return dp[i]
        
        ans = 0
        num = 0

        for j in range (i, len(S)) :
            num = num *10 + s[j] - '0'

        return dp

    def numberOfArrays(self, s: str, k: int) -> int:
        dp = [0] * len(s)
        return self.dfs(self, s, k, 0, dp)
    
s21 = Solution

s21.numberOfArrays(s21, "1000", 1000)
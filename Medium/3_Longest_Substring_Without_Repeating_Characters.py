class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        for nn in range (0, n) :
            print(nn)
        subStr = ""
        longestSubStr = 0
        for i in range(0, n) :
            for f in range (i, n) :
                found = subStr.find(s[f])
                if found != -1 :
                    i = found
                    if len(subStr) > longestSubStr :
                        longestSubStr = len(subStr)
                    subStr = ""
                    break
                print(subStr)
                subStr = subStr + s[f]

        if len(subStr) > longestSubStr :
            longestSubStr = len(subStr)
        return longestSubStr
    

s21 = Solution
str = "jbpnbwwd"
ans = s21.lengthOfLongestSubstring(s21, str)

print("*"*25)
print(ans)
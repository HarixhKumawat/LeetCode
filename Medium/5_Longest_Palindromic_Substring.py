class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        maxLength = 1
        start = 0

        for i in range(n):
            for j in range(i, n) :
                flag = 1

                for k in range(0, ((j - i) // 2) + 1):
                    print("k==", k)
                    if (s[i + k] != s[j - k]):
                        flag = 0
    
                # Palindrome
                if (flag != 0 and (j - i + 1) > maxLength):
                    start = i
                    maxLength = j - i + 1
                    
        return "abc"
    
s21 = Solution

ans = s21.longestPalindrome(s21, "lolxd")
print(ans)
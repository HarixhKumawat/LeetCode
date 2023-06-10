"""longest palindromic subsequence"""
# start for tail
# end for head

# def palindrom(str, start, end) -> bool:
#     if start == end :
#         return 1
#     if start > end :
#         return 0
    
#     if str[start] == str[end] :
#         return 2 + palindrom(s, start+1, end-1)
#     else :
#         return max(palindrom(s, start+1, end), palindrom(s, start, end-1))
    
# s = "bbbab"
# i = palindrom(s, 0, len(s)-1)
# print("")
# print("*"*15)
# print(i)


def longestPalindromeSubSqe(s : str) :
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
    return dp[n - 1]


ANS = longestPalindromeSubSqe("euazbipzncptldueeuechubrcourfpftcebikrxhybkymimgvldiwqvkszfycvqyvtiwfckexmowcxztkfyzqovbtmzpxojfofbvwnncajvrvdbvjhcrameamcfmcoxryjukhpljwszknhiypvyskmsujkuggpztltpgoczafmfelahqwjbhxtjmebnymdyxoeodqmvkxittxjnlltmoobsgzdfhismogqfpfhvqnxeuosjqqalvwhsidgiavcatjjgeztrjuoixxxoznklcxolgpuktirmduxdywwlbikaqkqajzbsjvdgjcnbtfksqhquiwnwflkldgdrqrnwmshdpykicozfowmumzeuznolmgjlltypyufpzjpuvucmesnnrwppheizkapovoloneaxpfinaontwtdqsdvzmqlgkdxlbeguackbdkftzbnynmcejtwudocemcfnuzbttcoew")

print(ANS)
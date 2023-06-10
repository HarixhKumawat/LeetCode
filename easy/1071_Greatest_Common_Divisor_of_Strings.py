class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        ans = []
        longStr = min(len(str1), len(str2))

        for i in range(longStr) :
            if str1[i] == str2[i]:
                print("no")
                ans.append(str1[i])
            else:
                return ""

        return "".join(ans)


s1 = Solution
ans = s1.gcdOfStrings(s1, "TAUXXTAUXXTAUXXTAUXXTAUXX", "TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX")
print("final ans:",ans)
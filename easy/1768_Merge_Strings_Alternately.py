class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        w1l = len(word1)
        w2l = len(word2)

        wordsLimit = max(w1l, w2l)

        ans = []


        for i in range (wordsLimit) :
            print(i)
            if i < w1l:
                ans.append(word1[i]) 
            if i < w2l:
                ans.append(word2[i]) 
        return "".join(ans)
    
s1 = Solution
ans = s1.mergeAlternately(s1, "abcd", "pq")
print("final ans:",ans)
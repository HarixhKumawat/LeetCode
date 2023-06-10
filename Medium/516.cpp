#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    int longestPalindromeSubseq(string s)
    {
        int n = s.size();
        cout << n;
        vector<int> dp(n), dpPrev(n);
        for (int start = n - 1; start >= 0; --start)
        {
            dp[start] = 1;
            for (int end = start + 1; end < n; ++end)
            {
                if (s[start] == s[end])
                {
                    cout << "+1";
                    dp[end] = dpPrev[end - 1] + 2;
                }
                else
                {
                    dp[end] = max(dpPrev[end], dp[end - 1]);
                }
            }
            dpPrev = dp;
        }
        cout << "woah done";
        return dp[n - 1];
    }
};

int main()
{
    Solution s1;
    int ans = s1.longestPalindromeSubseq("euazbipzncptldueeuechubrcourfpftcebikrxhybkymimgvldiwqvkszfycvqyvtiwfckexmowcxztkfyzqovbtmzpxojfofbvwnncajvrvdbvjhcrameamcfmcoxryjukhpljwszknhiypvyskmsujkuggpztltpgoczafmfelahqwjbhxtjmebnymdyxoeodqmvkxittxjnlltmoobsgzdfhismogqfpfhvqnxeuosjqqalvwhsidgiavcatjjgeztrjuoixxxoznklcxolgpuktirmduxdywwlbikaqkqajzbsjvdgjcnbtfksqhquiwnwflkldgdrqrnwmshdpykicozfowmumzeuznolmgjlltypyufpzjpuvucmesnnrwppheizkapovoloneaxpfinaontwtdqsdvzmqlgkdxlbeguackbdkftzbnynmcejtwudocemcfnuzbttcoew");
    cout << ans;
    return 0;
}

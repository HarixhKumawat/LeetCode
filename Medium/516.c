#include <stdio.h>
#include <string.h>

int max(int x, int y) { return (x > y)? x : y; }

int palindrom(char *str, int start, int end) {
    if (start == end)
        return 1;
    if (start > end)
        return 0;

    if (str[start] == str[end]) {
        printf("+1");
        return 2 + palindrom(str, start+1, end-1);
    }
    else
        return max(palindrom(str, start+1, end), palindrom(str, start, end-1));
}

int main() {
    char s[] = "euazbipzncptldueeuechubrcourfpftcebikrxhybkymimgvldiwqvkszfycvqyvtiwfckexmowcxztkfyzqovbtmzpxojfofbvwnncajvrvdbvjhcrameamcfmcoxryjukhpljwszknhiypvyskmsujkuggpztltpgoczafmfelahqwjbhxtjmebnymdyxoeodqmvkxittxjnlltmoobsgzdfhismogqfpfhvqnxeuosjqqalvwhsidgiavcatjjgeztrjuoixxxoznklcxolgpuktirmduxdywwlbikaqkqajzbsjvdgjcnbtfksqhquiwnwflkldgdrqrnwmshdpykicozfowmumzeuznolmgjlltypyufpzjpuvucmesnnrwppheizkapovoloneaxpfinaontwtdqsdvzmqlgkdxlbeguackbdkftzbnynmcejtwudocemcfnuzbttcoew";
    int i = palindrom(s, 0, strlen(s)-1);
    printf("\n");
    printf("***************\n");
    printf("%d\n", i);
    return 0;
}
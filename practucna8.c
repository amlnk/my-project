#include <stdio.h>
#include <string.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    char word[15];  
    int count[256] = {0};  
    int len;
    long long total, denominator = 1;

    printf("input word: ");
    scanf("%s", word);

    len = strlen(word);
    total = factorial(len);  

    for (int i = 0; i < len; i++)
        count[(unsigned char)word[i]]++;

    for (int i = 0; i < 256; i++) {
        if (count[i] > 1)
            denominator *= factorial(count[i]);
    }

    long long result = total / denominator;
    printf("Number of anagrams: %lld\n", result);

    return 0;
}
#include <stdio.h>

#define MOD 12345

int main() {
    int n;
    printf("Enter the sequence length n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Number of searched sequences: 2\n");
        return 0;
    }
    if (n == 2) {
        printf("Number of searched sequences: 4\n");
        return 0;
    }

    
    int dp[n + 1];
    dp[0] = 1;       
    dp[1] = 2;       
    dp[2] = 4;       

    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    printf("Number of searched sequencess: %d\n", dp[n]);
    return 0;
}

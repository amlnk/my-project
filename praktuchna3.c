#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);

    long long dp[31][2][3] = {0};

  
    dp[1][0][1] = 1; 
    dp[1][1][1] = 1; 

    for (int i = 2; i <= p; i++) {
        for (int c = 0; c <= 1; c++) {        
            for (int prev_c = 0; prev_c <= 1; prev_c++) { 
                for (int k = 1; k <= 2; k++) {  
                    if (dp[i-1][prev_c][k] == 0) continue;

                    if (c == prev_c) {
                       
                        if (k < 2) {
                            dp[i][c][k+1] += dp[i-1][prev_c][k];
                        }
                       
                    } else {
                        
                        dp[i][c][1] += dp[i-1][prev_c][k];
                    }
                }
            }
        }
    }

    long long result = 0;
    for (int c = 0; c <= 1; c++) {
        for (int k = 1; k <= 2; k++) {
            result += dp[p][c][k];
        }
    }

    printf("%lld\n", result);
    return 0;
}

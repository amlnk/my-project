#include <stdio.h>

int minSteps(int x, int y) {
    int d = y - x;
    if (d == 0) return 0;

    int step = 1;
    int sum = 0;
    int count = 0;

    while (sum < d) {
        count++;
        sum += step;
        if (count % 2 == 0) step++;
    }

    return count;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", minSteps(x, y));
    return 0;
}

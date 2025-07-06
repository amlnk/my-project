#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    double dx = x1 - x2;
    double dy = y1 - y2;
    double d = sqrt(dx * dx + dy * dy);
    double rsum = r1 + r2;
    double rdiff = fabs(r1 - r2);

    if (d == 0 && r1 == r2) {
        printf("-1\n");
    } else if (fabs(d - rsum) < 1e-6 || fabs(d - rdiff) < 1e-6) {
        printf("1\n");
    } else if (rdiff < d && d < rsum) {
        printf("2\n");
    } else {
        printf("0\n");
    }

    return 0;
}

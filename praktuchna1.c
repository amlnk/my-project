#include <stdio.h>

int main() {
    
    double t1, t2, t3;

    printf("Enter three values:\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double total_speed = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

     double total_time = 1.0 / total_speed;

    printf("The time required to eat the pie: %.2lf hours\n", total_time);

    return 0;
}

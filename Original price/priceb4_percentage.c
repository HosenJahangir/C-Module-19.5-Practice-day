#include <stdio.h>
int main()
{
    float dis, dp;
    scanf("%f %f", &dis, &dp);

    float op;
    op = dp / ((100 - dis) / 100);
    printf("%.2f", op);
    return 0;
}
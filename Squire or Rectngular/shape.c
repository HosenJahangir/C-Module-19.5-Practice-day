#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int with, high;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &with, &high);

        if (with == high)
        {
            printf("Squire");
        }
        else
        {
            printf("rectangle");
        }
    }

    return 0;
}

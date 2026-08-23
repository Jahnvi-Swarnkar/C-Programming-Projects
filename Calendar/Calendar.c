#include <stdio.h>

int main()
{
    printf("\n\nCALENDAR\n\n");

    int n, d;

    printf("Enter number of days in month: ");
    scanf(" %d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf(" %d", &d);

    printf("\n");

    printf("   S   M   T   W  Th   F  St\n");

    switch (d)
    {
        case 1: break;
        case 2: printf("%4s", ""); break;
        case 3: printf("%8s", ""); break;
        case 4: printf("%12s", ""); break;
        case 5: printf("%16s", ""); break;
        case 6: printf("%20s", ""); break;
        case 7: printf("%24s", ""); break;
        default: break;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%4d", i);

        if (d % 7 == 0)
        {
            printf("\n");
        }

        d++;
    }
}

#include <stdio.h>

int main()
{
    printf("\n\nCALCULATOR\n\n\n");

    printf("==============================================================================================================\n\n");

    printf("RULES:-\n\t1. enter '1' for next operation.\n\t2. enter any other number to exit calculator.\n\n\n");

    printf("OPERATIONS:-\n+\t-\t*\t/\t\n\n");

    printf("==============================================================================================================\n\n");

    float x, y;
    char o;
    int c;
    float a;

    printf("press '1' to start ");
    scanf("%d", &c);
    printf("\n\n");

    while (c == 1)
    {
        printf("enter your operation (with spaces in b/w): ");
        scanf("%f %c %f", &x, &o, &y);

        if (o == '+')
        {
            printf("Answer = %f\n\n", x+y);
            printf("Do you want to perform next operation? ");
            scanf("%d", &c);
            printf("\n\n");
        }

        else if (o == '-')
        {
            printf("Answer = %f\n\n", x-y);
            printf("Do you want to perform next operation? ");
            scanf("%d", &c);
            printf("\n\n");
        }

        else if (o == '*')
        {
            printf("Answer = %f\n\n", x*y);
            printf("Do you want to perform next operation? ");
            scanf("%d", &c);
            printf("\n\n");
        }

        else
        {
            printf("Answer = %f\n\n", x/y);
            printf("Do you want to perform next operation? ");
            scanf("%d", &c);
            printf("\n\n");
        }

        printf("==============================================================================================================\n\n");
    }

    printf("Thankyou.\n");

    return 0;
}

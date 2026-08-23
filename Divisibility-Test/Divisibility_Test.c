#include <stdio.h>

int main()
{
    printf("\n\nDIVISIBILITY TEST\n\n");

    int dividend, divisor, opt = 1;

    printf("number range (integers only) ---> -2,147,483,648  to  2,147,483,647\n\n");

    printf("==============================================================================================================\n\n");

    while (opt == 1)
    {
        printf("enter dividend: ");
        scanf("%d", &dividend);
        printf("enter divisor: ");
        scanf("%d", &divisor);

        if (dividend % divisor == 0)
        {
            printf("%d is divisible by %d by %d.\n", dividend, divisor, (dividend / divisor));
        }
        else
        {
            printf("%d is not divisible by %d.\n", dividend, divisor);
        }

        printf("\nDo you want to proceed with another test?\n[Press 1 to continue\tPress any other number to exit]\n");
        scanf("%d", &opt);
        printf("\n");
        printf("==============================================================================================================\n\n");
    }

    printf("Bye bye!\n\n");

    return 0;
}

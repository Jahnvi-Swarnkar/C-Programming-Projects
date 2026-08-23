#include <stdio.h>

int main()
{
    printf("\n\nMULTIPLICATION SQUARE\n\n");

    int i, j, n1, n2, opt = 1;

    printf("number range ---> -2,147,483,648  to  2,147,483,647\n\n");

    printf("==============================================================================================================\n\n");

    while (opt == 1)
    {
        printf("enter 1st number: ");
        scanf("%d", &n1);
        printf("enter 2nd number: ");
        scanf("%d", &n2);

        for (i=n1; i<=n2; i++)
        {
            for (j=n1; j<=n2; j++)
            {
                printf("%d\t", i * j);
            }
            printf("\n\n\n");
        }

        printf("Do you want to proceed with anothor square?\n[Press 1 to continue\tPress any other number to exit]\n");
        scanf("%d", &opt);
        printf("\n");

        printf("==============================================================================================================\n\n");
    }

    printf("Thankyou.\n\n");

    return 0;
}

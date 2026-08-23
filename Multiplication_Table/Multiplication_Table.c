#include <stdio.h>

int main()
{
    printf("\n\nMULTIPLICATION TABLE\n\n");

    printf("number range ---> -2,147,483,648  to  2,147,483,647\n\n");

    printf("==============================================================================================================\n\n");

    int num, i, opt = 1;

    while (opt == 1)
    {   
        printf("Enter number: ");
        scanf("%d", &num);

        for (i=1; i<=10; i++)
        {
            printf("%d * %-2d = %d\n", num, i, num*i);
        }

        printf("\nDo you want to proceed with anothor table?\n[Press 1 to continue\tPress any other number to exit]\n");
        scanf("%d", &opt);
        printf("\n");

        printf("==============================================================================================================\n\n");
    }

    printf("Thankyou!\n\n");

    return 0;
}

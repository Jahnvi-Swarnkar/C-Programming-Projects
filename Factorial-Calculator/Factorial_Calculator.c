#include <stdio.h>

int main()
{
    printf("\nFACTORIAL CALCULATOR\n\n");

    printf("==============================================================================================================\n\n");

    int num, i, opt = 1;
    int fact;

    while (opt == 1)
    {
        fact = 1;
        
        printf("enter the number: ");
        scanf("%d", &num);

        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }

        printf("factorial of %d is %d", num, fact);

        printf("\n\nDo you want to proceed with anothor number?\n[Press 1 to continue\tPress any other number to exit]\n");
        scanf("%d", &opt);
        printf("\n");

        printf("==============================================================================================================\n\n");
    }

    printf("Bye bye!\n\n");

    return 0;
}

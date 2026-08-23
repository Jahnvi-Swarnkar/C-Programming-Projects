#include <stdio.h>

int main()
{
    printf("\n\nREVERSE THE DIGITS\n\n");

    int num, rnum, cont = 1;
    
    printf("number range ---> -2,147,483,648  to  2,147,483,647\nnumber must NOT start with 0\n\n");
    
    printf("==============================================================================================================\n\n");

    while (cont == 1)
    {
        rnum = 0;

        printf("enter your number: ");
        scanf("%d", &num);
        printf("\n");

        while (num)
        {
            rnum = (rnum * 10) + (num % 10);
            num /= 10;
        }

        printf("The reversed number is %d\n\n", rnum);

        printf("\nDo you want to proceed with another test?\n[Press 1 to continue\tPress any other number to exit]\n");
        scanf("%d", &cont);
        printf("\n");

        printf("==============================================================================================================\n\n");
    }

    printf("Bye bye!\n\n");    

    return 0;
}

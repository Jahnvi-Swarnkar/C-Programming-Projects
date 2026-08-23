#include <stdio.h>
#define SCALE_FACTOR (9.00f / 5.00f)
#define INVERSE_SCALE_FACTOR (5.00f / 9.00f)
#define C_K_OFFSET 273.15f
#define C_F_OFFSET 32.00f

int main()
{
    printf("\n\n\n!!!TEMPERATURE UNIT CONVERTER!!!\n\n\n");

    char su, tu;    // 'source unit' & 'target unit'
    float s, t;     // 'source temp' & 'target temp'
    int q = 1;      // for continuation

    printf("----------------------------------------------------------------------------------------------------------------------------------------\n\n\n");

    printf("RULES:\n\n");
    printf("* Enter:\n\t\"c\" for CELSIUS\n\t\"f\" for FAHRENHEIT\n\t\"k\" for KELVIN\n\n");
    printf("* Enter \"1\" to proceed to the next conversion.\nEnter any other number to exit.\n\n\n");

    while (q == 1)
    {
        printf("----------------------------------------------------------------------------------------------------------------------------------------\n\n\n");

        printf("Enter Source Unit: ");
        scanf(" %c", &su);
        printf("Enter Target Unit: ");
        scanf(" %c", &tu);

        printf("\n");

        if ((su == 'c') && (tu == 'f'))
        {
            printf("Enter Celsius Temperature: ");
            scanf(" %f", &s);
            t = ((SCALE_FACTOR * s) + C_F_OFFSET);
            printf("Fahrenheit Equivalent: %.2f\n\n", t);
        }

        else if ((su == 'f') && (tu == 'c'))
        {
            printf("Enter Fahrenheit Temperature: ");
            scanf(" %f", &s);
            t = ((s - C_F_OFFSET) * INVERSE_SCALE_FACTOR);
            printf("Celsius Equivalent: %.2f\n\n", t);
        }

        else if ((su == 'c') && (tu == 'k'))
        {
            printf("Enter Celsius Temperature: ");
            scanf(" %f", &s);
            t = (s + C_K_OFFSET); 
            printf("Kelvin Equivalent: %.2f\n\n", t);
        }

        else if ((su == 'k') && (tu == 'c'))
        {
            printf("Enter Kelvin Temperature: ");
            scanf(" %f", &s);
            t = (s - C_K_OFFSET);
            printf("Celsius Equivalent: %.2f\n\n", t);
        }

        else if ((su == 'f') && (tu == 'k'))
        {
            printf("Enter Fahrenheit Temperature: ");
            scanf(" %f", &s);
            t = (((INVERSE_SCALE_FACTOR) * (s - C_F_OFFSET)) + C_K_OFFSET);
            printf("Kelvin Equivalent: %.2f\n\n", t);
        }

        else if ((su == 'k') && (tu == 'f'))
        {
            printf("Enter Kelvin Temperature: ");
            scanf(" %f", &s);
            t = (((SCALE_FACTOR) * (s - C_K_OFFSET)) + C_F_OFFSET);
            printf("Fahrenheit Equivalent: %.2f\n\n", t);
        }

        else if (su == tu)
        {
            printf("Enter Temperature: ");
            scanf(" %f", &s);
            printf("Equivalent Temperature: %.2f\n\n", s);
        }

        else
        {
            printf("Invalid Operation.\n\n");
        }

        printf("Do you want to proceed to the next conversion? ");
        scanf(" %d", &q);
        printf("\n\n");
    }

    printf("Thank you.");

    return 0;
}

#include <stdio.h>

int main()
{
    printf("\n\n\nTAX\n\n\n");
    float amount;

    printf("Enter an amount (dollars-and-cents): ");
    scanf(" %f", &amount);
    printf("\n");

    float percent_tax;

    printf("Enter percentage tax added (%%): ");
    scanf(" %f", &percent_tax);
    printf("\n");

    float final_amount;
    final_amount = (((percent_tax + 100.00f) /  100.00f) * amount);

    printf("Amount with tax added: $%.2f", final_amount);

    return 0;
}

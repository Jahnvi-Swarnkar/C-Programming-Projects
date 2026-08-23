#include <stdio.h>

int main()
{
    printf("\n\n\nBILLS NEEDED\n\n\n");
    int amt;
    printf("Enter an amount (integer): ");
    scanf(" %d", &amt);
    printf("\n");

    int n100, n50, n20, n10, n1, left;

    n100 = amt / 100;
    left = amt - (100 * n100);

    n50 = left / 50;
    left = left - (50 * n50);

    n20 = left / 20;
    left = left - (20 * n20);

    n10 = left / 10;
    left = left - (10 * n10);

    n1 = left;

    printf("Rs.100 bills: %d\n Rs.50 bills: %d\n Rs.20 bills: %d\n Rs.10 bills: %d\n  Rs.1 bills: %d\n\n", n100, n50, n20, n10, n1);

    return 0;
}

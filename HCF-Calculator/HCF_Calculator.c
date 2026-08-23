#include <stdio.h>

int main()
{
    printf("HCF CALCULATOR\n\n");
    int m, n, gcd;

    printf("Enter two integers: ");
    scanf(" %d %d", &m, &n);

    for (int i = 1; (i <= n) && (i <= m); i++)
    {
        if ((m % i == 0) && (n % i == 0))
        {
            gcd = i;
        }
    }

    printf("Greatest common divisior: %d", gcd);

    return 0;
}

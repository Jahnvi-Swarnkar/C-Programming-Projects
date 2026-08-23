#include <stdio.h>

int main(void)
{
    printf("OCTAL NUMBER CALCULATOR\n\n");
    int n;
    printf("Enter a number btween 0 and 32767: ");
    scanf("%d", &n);

    int o;
    o = ((((((n / 8) / 8) / 8) / 8) % 8) * 10000) + (((((n / 8) / 8) / 8) % 8) * 1000) + ((((n / 8) / 8) % 8) * 100) + (((n / 8) % 8) * 10) + (n % 8);
    printf("In octal, your number is: %.5d", o);

    return 0;
}

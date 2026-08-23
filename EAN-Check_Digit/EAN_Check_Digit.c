#include <stdio.h>

int main()
{
    printf("EAN (European Article Number) - CHECK DIGIT\n\n");
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
    printf("Enter the first 12 digits of an EAN (European Article Number): ");
    scanf(" %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    int first_sum = i2 + i4 + i6 + i8 + i12;
    int second_sum = i1 + i3 + i5 + i7 + i9 + i11;
    int total = first_sum * 3 + second_sum;
    int check_digit = 9 - ((total - 1) % 10);

    printf("Check digit: %d", check_digit);


    return 0;
}

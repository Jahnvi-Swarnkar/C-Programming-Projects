#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool mat[3][3] = {
                        {1, 0, 1},
                        {0, 0, 1},
                        {0, 1, 0}
                     };

    int row, col, i = 3;
    int total = 4;
    int left = 4;

    while (i > 0)
    {
        printf("enter the coordinates: ");
        scanf("%d %d", &row, &col);

        if (mat[row-1][col-1] == 1)
        {
            left--;
            printf("HIT!\n");
            printf("%d ships left!\n", left);
            
            if (left == 0)
            {
                printf("YOU WIN!\n");
                break;
            }
        }
        else
        {
            i--;
            if (i != 0)
            {
                if (i == 1)
                {
                    printf("MISS!\nYou have %d more chance.\n", i);
                }
                else
                {
                    printf("MISS!\nYou have %d more chances.\n", i);
                }
            }
            else
            {
                printf("YOU LOSE!");
            }
        }
        
    }
    

    return 0;
}

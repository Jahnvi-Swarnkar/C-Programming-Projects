#include <stdio.h>

int main()
{
    printf("\nBOMB CRAFT\n\n");

    printf("RULES:-\n");
    printf("\t1. 4*4 matrix. there are 3 bombs.\n");
    printf("\t2. enter the coordinates (row col) of the block you want to hit (with a space in b/w).\n");
    printf("\t3. if you hit a bomb, the game ends.\n\n");

    int mat[4][4] = { {1, 1, 0, 1},
                      {0, 1, 1, 1},
                      {1, 1, 1, 1},
                      {1, 0, 1, 1} };

    int i, x, y;
    int left = 13;

    while (i >= 0)
    {
        printf("enter the coordinates: ");
        scanf("%d %d", &x, &y);

        if (mat[x-1][y-1] == 1)
        {
            printf("HIT!\n");
            left--;
            printf("%d hits left.\n", left);

            if (left == 0)
            {
                printf("You hit all the free blocks!\nYOU WIN!\n");
                break;
            }
            
        }

        else
        {
            printf("You hit a bomb!\nYOU LOST!\n");
            break;
        }
    }

    return 0;
}

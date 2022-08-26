#include <stdio.h>
int main()
{
    int row;
    scanf("%d", &row);
    int column = (row * 2) - 1;
    int end1 = (row * 2) - 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (i == 1 || i == j || j == end1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        end1--;
    }
    for (int i = row - 1; i > 0; i--)
    {
        for (int j = 1; j <= column; j++)
        {
            if (i == 1 || i == j || j == column - i + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
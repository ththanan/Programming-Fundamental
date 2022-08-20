#include <stdio.h>
int main()
{
    int num;
    int num1, num2;
    scanf("%d", &num);
    num1 = num;
    num2 = 2;
    for (int i = 1; i <= num; i++)
    {
        for (int s = 1; s < i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (num1 * 2) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        num1--;
    }
    for (int i = num - 1; i >= 1; i--)
    {
        for (int s = 1; s < i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (num2 * 2) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        num2++;
    }
    return 0;
}
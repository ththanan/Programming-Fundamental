#include <stdio.h>
int main()
{
    int num;
    int space2 = 1;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            for (int j = 1; j <= (num * 2) - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else if (i > 0)
        {
            //print space before *
            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }

            //print front *
            printf("*");

            //print space between *
            int space = ((((num - i) * 2) - 1) - 2);
            for (int j = 1; j <= space; j++)
            {
                if (space > 0)
                {
                    printf(" ");
                }
            }

            //print back *
            if (i < num - 1)
            {
                printf("*");
            }
            
            printf("\n");
        }
    }
    for (int i = num - 1; i > 0; i--)
    {
        if (i == 1)
        {
            for (int j = 1; j <= (num * 2) - 1; j++)
            {
                printf("*");
            }
        }
        else if (i > 1)
        {
            //print space before *
            for (int j = 1; j < i; j++)
            {
                printf(" ");
            }

            //print front *
            printf("*");

            //print space between *
            for (int j = 1; j <= space2; j++)
            {
                printf(" ");
            }
            space2 += 2;

            //print back *
            printf("*");

            printf("\n");
        }
    }
    return 0;
}
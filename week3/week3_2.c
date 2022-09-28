#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int num = input-1;
    for(int y = num; y >= num * (-1); y--)
    {
        for(int x = num * (-1); x <= num; x++)
        {
            if((x <= y && x + y >= 0 )|| (x >= y && x + y <= 0))
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

#include <stdio.h>
int main()
{
    int a[5], b[5];
    int same = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int j = 0; j < 5; j++)
    {
        scanf("%d", &b[j]);
    }
    for(int k = 0; k < 5; k++)
    {
        printf("%d ", a[k]);
    }
    for(int l = 0; l < 5; l++)
    {
        same = 0;
        for(int m = 0; m < 5; m++)
        {
            if(b[l] == a[m])
            {
                same++;
            }
        }
        if(same==0)
        {
            printf("%d ", b[l]);
        }
    }
    return 0;
}
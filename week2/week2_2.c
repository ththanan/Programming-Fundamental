#include <stdio.h>
int main()
{
    int a[5], b[5];
    int ans[10];
    int same = 0;
    int add = 0;
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
        ans[k] = a[k];
    }
    for(int m = 0; m < 5; m++)
    {
        same = 0;
        for(int n = 0; n < 5; n++)
        {
            if(b[m] == ans[n])
            {
                same++;
            }
        }
        if(same==0)
        {
            ans[5+add]=b[m];
            add++;
        }
    }
    for(int x = 0; x < 5+add ; x++)
    {
        printf("%d ", ans[x]);
    }
    return 0;
}
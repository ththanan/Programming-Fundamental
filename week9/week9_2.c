#include<stdio.h>
int main()
{
    int a[5], b[5];
    int all_num[10];
    for(int i = 0; i < 10; i++)
    {
        all_num[i] = 0;
    }
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        all_num[a[i]]++;
    }
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        all_num[b[i]]++;
    }

    for(int i = 0; i < 10; i++)
    {
        if(all_num[i] > 1)
        {
            printf("%d",i);
        }
    }
    return 0; 
}

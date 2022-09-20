#include <stdio.h>
int main()
{
    int n1, n2, n3, n=0;
    int A[1], B[1], C[1];
    char abc[3];
    scanf("%d %d %d", &n1, &n2, &n3);
    scanf("%s", abc);
    if((n1 > 0 && n1 < 100) && (n2 > 0 && n2 < 100) && (n3 > 0 && n3 < 100))
    {
        if(n3 < n2)
        {
            n = n2;
            n2 = n3;
            n3 = n;
        }
        if(n2 < n1)
        {
            n = n1;
            n1 = n2;
            n2 = n;
        }
        if(n3 < n2)
        {
            n = n2;
            n2 = n3;
            n3 = n;
        }
        for(int i = 0 ; i <= 2; i++)
        {
            if(abc[i] == 'A')
            {
                abc[i] = n1;
            }
            else if(abc[i] == 'B')
            {
                abc[i] = n2;
            }
            else if(abc[i] == 'C')
            {
                abc[i] = n3;
            }
        }
        printf("%d %d %d", abc[0], abc[1], abc[2]);
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    int n1, n2, n3;
    char abc[4];
    int highest, middle, lowest;
    scanf("%d %d %d", &n1, &n2, &n3);
    scanf("%s", abc);
    if((n1 > 0 && n1 < 100) && (n2 > 0 && n2 < 100) && (n3 > 0 && n3 < 100))
    {
        if(n1 >= n2 && n1 >= n3)
        {    
            highest = n1;
            if(n2 >= n3)
            {
                middle = n2;
                lowest = n3;
            }
            else if(n3 >= n2)
            {    
                middle = n3;
                lowest = n2;
            }
        }
        else if(n2 >= n1 && n2 >= n3)
        {    
            highest = n2;
            if(n1 >= n3)
            {
                middle = n1;
                lowest = n3;
            }
            else if(n3 >= n1)
            {    
                middle = n3;
                lowest = n1;
            }
        }
        else if(n3 >= n1 && n3 >= n2)
        {    
            highest = n3;
            if(n1 >= n2)
            {
                middle = n1;
                lowest = n2;
            }
            else if(n2 >= n1)
            {    
                middle = n2;
                lowest = n1;
            }
        }

        if(strcmp(abc, "ABC") == 0)
        printf("%d %d %d", lowest, middle, highest);
        else if(strcmp(abc, "ACB") == 0)
        printf("%d %d %d", lowest, highest, middle);
        else if(strcmp(abc, "BAC") == 0)
        printf("%d %d %d", middle, lowest, highest);
        else if(strcmp(abc, "BCA") == 0)
        printf("%d %d %d", middle, highest, lowest);
        else if(strcmp(abc, "CAB") == 0)
        printf("%d %d %d", highest, lowest, middle);
        else if(strcmp(abc, "CBA") == 0)
        printf("%d %d %d", highest, middle, lowest); 
    }
    return 0;
}
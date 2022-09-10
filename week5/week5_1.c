#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[100];
    scanf("%[^\n]s", sentence);
    for(int i = strlen(sentence); i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            printf("%c", sentence[j]);
        }
        printf("\n");
    }
    return 0;
}

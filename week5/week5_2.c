#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[100];
    char ans[100][100];
    scanf("%[^\n]s", sentence);
    for(int i = 0; i < strlen(sentence); i++)
    {
        for(int j = 0; j <= i; j++)
        {
            ans[i][j] = sentence[j];
        }
    }
    for(int i = strlen(sentence) - 1; i >= 0; i--)
    {
        for(int j = 0; j <= i ; j++)
        {
            printf("%c", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}

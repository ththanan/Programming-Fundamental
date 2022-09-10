#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[100];
    char c;
    scanf("%[^\n]s", sentence);
    scanf(" %c", &c);
    int len = strlen(sentence);
    for(int i = 0 ; i < len; i++)
    {
        if(sentence[i] == c)
        {
            for(int j = i; j < len; j++)
            {
                sentence[j] = sentence[j+1];
            }
            len--;
            i--;
        }
    }
    printf("%s", sentence);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[100];
    char c;
    scanf("%[^\n]s", sentence);
    scanf(" %c", &c);
    for(int i = 0; i < strlen(sentence); i++)
    {
        if(sentence[i] != c)
        {
            printf("%c", sentence[i]);
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[100];
    scanf("%[^\n]s", sentence);
    for(int i = 0; i < 26 ; i++)
    {
        int n = 0;
        printf("%c : ", i+65);
        for(int j = 0; j < strlen(sentence) ; j++)
        {
            if (i+65 == sentence[j] || i+97 == sentence[j])
            {
                n++;
            }
        }
        printf("%d\n", n);
    }
    return 0;
}
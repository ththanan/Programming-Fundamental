#include <stdio.h>
int main()
{
    char sentence[100];
    int letters[26];
    for(int i = 0; i <= 26; i++)
    {
        letters[i] = 0;
    }
    scanf("%[^\n]s", sentence);
    for(int i = 0; sentence[i] != '\0' ; i++)
    {
        if(sentence[i] >= 65 && sentence[i] <= 90)
        {
            letters[sentence[i]-65] += 1;
        }
        else if(sentence[i] >= 97 && sentence[i] <= 122)
        {
            letters[sentence[i]-97] += 1;
        }
    }
    for(int i = 0; i < 26; i++)
    {
        printf("%c : %d\n", i + 65, letters[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    char sentence[100];
    char check_sentence[100];
    scanf("%[^\n]s", sentence);
    int j=0;
    int highest = 0;
    for(int i = 0; sentence[i] != '\0'; i++)
    {
        if(sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            check_sentence[j] = sentence[i] + 32;
            j++;
        }
        else
        {
            check_sentence[j] = sentence[i];
            j++;
        }   
    }
    for(int i = 0; check_sentence[i] != '\0'; i++)
    {
        if(check_sentence[i] >= 'a' && check_sentence[i] <= 'z' )
        {
            if(check_sentence[i] - highest >= 0)
            {
                highest = check_sentence[i];
            }
        }
    }
    if(highest >= 'a' && highest <= 'z')
    printf("%c", highest);
    else
    printf("There is no alphabet.");
    return 0;
}
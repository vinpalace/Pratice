#include<stdio.h>
#include<string.h>

int main()
{

    char sentence1[100] = "i dont mind spending everyday out all alone in the pouring rain";
    char sentence2[100] = "rain wadsasd dont mind everyday";

    int i = 0;

    char *tokenArray[20], *tokenArray2[20];

    char *token;

    token = strtok(sentence1, " ");

    while(token != NULL)
    {
        tokenArray[i] = token;

        printf("%s\n",token);
        token = strtok(NULL, " ");

        i++;
    }


    char *token2;

    int j = 0;

    token2 = strtok(sentence2, " ");

    while(token2 != NULL)
    {
        tokenArray2[j] = token2;
        printf("%s\n",token2);
        token2 = strtok(NULL, " ");
        j++;
    }

    int a, b;
    int count = 0;

    for(a = 0; a < j; a++)
    {
        for(b = 0; b < i; b++)
        {
            if(!strcmp(tokenArray2[a], tokenArray[b]))
            {
                count++;
            }
        }
    }

    printf("\n%d\n",count);


    return 0;
}

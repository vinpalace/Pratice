#include<stdio.h>
#include<string.h>

void withLibraryFunctions(char a[], char b[]);
void withoutLibraryFunctions(char a[], char b[]);
int main()
{
    char string[50], search[50];

    printf("\nEnter a string\n");
    scanf("%s",string);
    printf("\nEnter a substring to search\n");
    scanf("%s",search);

    //withLibraryFunctions(string, search);

    withoutLibraryFunctions(string, search);



    return 0;

}


void withLibraryFunctions(char string[], char search[])
{
    char *subs;

    subs = strstr(string, search);

    if(subs!=NULL)
        printf("\nfound");
    else
        printf("\nNot Found");

}

void withoutLibraryFunctions(char string[], char search[])
{
    int count1, count2, flag=0;
    int i, j;
    count1 = strlen(string);
    count2 = strlen(search);

    for(i = 0; i <= count1 - count2 ; i++)
    {
        for(j = i; j < i + count2; j++)
        {
            flag = 1;
            if(string[j] != search[j - i])
            {
                flag = 0;
                break;

            }

        }
        if(flag == 1)
        break;
    }

    if(flag == 1)
        printf("\nFound\n");
    else
        printf("\nNot found\n");

}

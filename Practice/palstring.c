#include<stdio.h>
#include<string.h>

void main()
{
    char string[]="fellefh";
    int i = 0;
    int length = strlen(string);

    printf("\n%d",length);
    while(i < length/2)
    {
        if(string[i] != string[length -1 - i])
        {
            break;
        }
n
    i = i + 1;
    }
    if(i == length/2)
    {
        printf("\nIt is a palindrome");

    }
    else{
        printf("\nNot");
    }
}

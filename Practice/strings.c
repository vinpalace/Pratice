#include<stdio.h>
#include<string.h>


int main()
{
    char *one = "Vineeth";
    char *two = "Moturu";

    strcat(one, two);
    printf("%s\n",one);
    printf("%s\n",two);
}

#include<stdio.h>

void main()
{
    int x = 30, *y, *z;

    y = &x;
    z = y;

    //*y++  = *z++;

    *y = *z;
    y = y + 1;
    z = z + 1;

    x++;

    printf("%d->%p->%p",x,y,z);

}

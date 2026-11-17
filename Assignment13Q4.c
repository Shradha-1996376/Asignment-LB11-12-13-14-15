#include<stdio.h>
#include<stdlib.h>

int CountMultiplic(int ino)
{
    int idigit = 1;
    int icnt = 1;

    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        idigit = ino % 10;
        if(idigit != 0)
        {
            icnt = icnt * idigit;

        }
        ino = ino/10;
    }
    return icnt;
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    iret = CountMultiplic(ivalue);
    printf("Multiplic :%d\n",iret);

    return EXIT_SUCCESS;
}
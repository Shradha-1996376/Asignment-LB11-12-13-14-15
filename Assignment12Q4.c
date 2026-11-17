#include<stdio.h>
#include<stdlib.h>

int Countfour(int ino)
{
    int idigit = 0;
    int icnt = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        idigit = ino % 10;
        if(idigit == 4)
        {
            icnt++;

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

    iret = Countfour(ivalue);
    printf("frequency 4:%d",iret);

    return EXIT_SUCCESS;
}
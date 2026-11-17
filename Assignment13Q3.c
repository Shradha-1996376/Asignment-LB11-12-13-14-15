#include<stdio.h>
#include<stdlib.h>

int Countodd(int ino)
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
        if(idigit > 3 && idigit < 7)
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

    printf("enter the value\n");
    scanf("%d",&ivalue);

    iret = Countodd(ivalue);
    printf("Odd number : %d\n",iret);

    return EXIT_SUCCESS;

}
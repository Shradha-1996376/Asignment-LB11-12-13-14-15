#include<stdio.h>
#include<stdlib.h>

int CountDiff(int ino)
{
    int idigit = 0;
    int ieven = 0;
    int iodd = 0;

    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        idigit = ino % 10;
        if(ino % 2 == 0)
        {
            ieven = ieven + idigit;
        }   
        else 
        {
            iodd = iodd + idigit;
        }
       ino = ino/10;
       
    }

    return (ieven - iodd);
}

int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    iret = CountDiff(ivalue);
    printf("differnce: %d\n",iret);

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int ino)
{
    if(ino < 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int ivalue = 0;
    BOOL bret = FALSE;

    printf("please enter the number\n");
    scanf("%d",&ivalue);

    bret = ChkGreater(ivalue);

    if(ivalue > 100)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}
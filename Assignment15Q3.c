#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int ino1, int ino2)
{
    if(ino1 == ino2)
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
    int ivalue1 = 0, ivalue2 = 0;
    BOOL bret = FALSE;

    printf("please enter the two number \n");
    scanf("%d %d",&ivalue1,&ivalue2);

    bret = ChkEqual(ivalue1,ivalue2);

    if(ivalue1 == ivalue2)
    {
        printf("Equals\n");
    }
    else
    {
        printf("Not Equals\n");
    }

    return EXIT_SUCCESS;
}
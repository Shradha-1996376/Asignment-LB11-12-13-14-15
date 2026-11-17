#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Chkzero(int ino)
{
   int idigit = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        idigit = ino % 10;
        if(idigit == 0)
        {
            return TRUE;
        }
    
        ino = ino / 10;
    }
        return FALSE;
}

int main()
{
    int ivalue = 0;
    BOOL bret = FALSE;

    printf("enter number\n");
    scanf("%d",&ivalue);

    bret = Chkzero(ivalue);
    
    if(bret == TRUE)
    {
        printf("it contain zero\n");
    }
    else
    {
        printf("there is no zero\n");
    }
    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

int Factrev(int ino)
{
    int icnt = 0;

    for(icnt = ino/2; icnt > 0;icnt--)
    {
        if((ino % icnt) == 0)
        {
            printf(" %d\t",icnt);
        }
    }
}

int main()
{
    int ivalue = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);
    Factrev(ivalue);

    return EXIT_SUCCESS;
}
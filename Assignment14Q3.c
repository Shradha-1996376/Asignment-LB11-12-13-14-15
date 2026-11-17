#include<stdio.h>
#include<stdlib.h>

void NonFactor(int ino)
{
    int icnt = 0;

    for(icnt = 1; icnt <= ino ;icnt++)
    {
        if((ino % icnt) != 0)
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
    NonFactor(ivalue);

    return EXIT_SUCCESS;
}
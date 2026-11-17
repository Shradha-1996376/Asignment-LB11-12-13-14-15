#include<stdio.h>
#include<stdlib.h>

void SumNonFactor(int ino)
{
    int icnt = 0;
    int isum = 0;

    for(icnt = 1; icnt <= ino ;icnt++)
    {
        if((ino % icnt) != 0)
        {
            isum = isum + icnt;
            printf("%d\n",isum);
        }
    }
}

int main()
{
    int ivalue = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);
    SumNonFactor(ivalue);

    return EXIT_SUCCESS;
}
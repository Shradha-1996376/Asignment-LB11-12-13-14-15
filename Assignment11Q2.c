#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int ino1,int ino2)
{
    int icnt = 0;
    for(icnt = ino1; icnt <= ino2; icnt++)
    {
         if(icnt % 2 == 0)
         {
        printf("%d\t",icnt);
         }
    }
    if( ino1 > ino2)
    {
        printf("invalid range\n");
    }
}

int main()
{
    int ivalue1 = 0, ivalu2 = 0;

    printf("enter starting point\n");
    scanf("%d",&ivalue1);

    printf("enter ending point\n");
    scanf("%d",&ivalu2);

    RangeDisplayEven(ivalue1,ivalu2);

    return EXIT_SUCCESS;
}
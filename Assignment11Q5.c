#include<stdio.h>
#include<stdlib.h>

void RangeDisplayrev(int ino1, int ino2)
{
    int icnt = 0;
    for(icnt = ino2; icnt >=ino1; icnt--)
    {
        printf(" %d\t",icnt);
    }
     if(ino1 > ino2)
        {
            printf("invalid range\n");
        }
        printf("\n");
}

int main()
{
    int ivalue1 = 0, ivalu2 = 0;

    printf("enter the starting point\n");
    scanf("%d",&ivalue1);

    printf("enter the ending point\n");
    scanf("%d",&ivalu2);

    RangeDisplayrev(ivalue1,ivalu2);

    return EXIT_SUCCESS;
}
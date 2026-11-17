#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int ino1, int ino2)
{
    int icnt = 0;
    for(icnt = ino1; icnt <= ino2; icnt++)
    {
        printf("%d\t",icnt);
    }
    if (ino1 > ino2)
    {
        printf("invalid range\n");
    }
    
}


int main()
{
    int ivalue1 = 0, ivalu2 = 0;
    printf("Enter the staring point\n");
    scanf("%d",&ivalue1);

    printf("Enter the Ending point\n");
    scanf("%d",&ivalu2);

    RangeDisplay(ivalue1,ivalu2);

    return EXIT_SUCCESS;
}
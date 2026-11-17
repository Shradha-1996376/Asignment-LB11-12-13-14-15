#include<stdio.h>
#include<stdlib.h>

int RangeDisplaysum(int ino1,int ino2)
{
    int icnt = 0 ;
    int ans = 0;
     
    for(icnt = ino1; icnt <= ino2; icnt++)
    {

        ans = icnt + ans;
    
    }        
    
    if(ino1 > ino2 )
    {
        printf("invalid range\n");
    }
    else if (ino1 < 0)
    {
        printf("invalid range\n");
    }
     return ans;
}
    


int main()
{
    int ivalue1 = 0,ivalu2 = 0,iret = 0;

    printf("Enter the starting point\n");
    scanf("%d",&ivalue1);

    printf("Enter the Ending point\n");
    scanf("%d",&ivalu2);

    iret = RangeDisplaysum(ivalue1,ivalu2);
    printf("sumation is %d\n", iret);

    return EXIT_SUCCESS;
}
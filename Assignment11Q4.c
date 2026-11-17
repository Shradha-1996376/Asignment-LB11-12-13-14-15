#include<stdio.h>
#include<stdlib.h>

int Rangesumeven(int ino1,int ino2)
{
   int icnt = 0;
   int ans = 0;

    for(icnt = ino1; icnt <= ino2; icnt++)
    {
        if(icnt % 2 ==0)
        {
        ans = icnt + ans;
        }
    }
        if(ino1 > ino2)
        {
            printf("invalid range\n");
        }
        else if(ino1 < 0)
        {
            printf("invalid range\n");
        }
      
    return ans;
}
    


int main()
{
    int ivalue1 = 0 ,ivalu2 = 0,iret = 0;

    printf("enter starting point\n");
    scanf("%d",&ivalue1);

    printf("enter ending point\n");
    scanf("%d",&ivalu2);

    iret = Rangesumeven(ivalue1,ivalu2);
    printf("sum is %d",iret);

    return EXIT_SUCCESS;
}
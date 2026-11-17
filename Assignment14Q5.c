#include<stdio.h>
#include<stdlib.h>

int FactDiff(int ino)
{
    int icnt = 0 ;
    int ifact = 0;
    int iNonf = 0;
    
    for(icnt = 1; icnt < ino; icnt++)
    {
         if((ino % icnt) == 0)
         {
          ifact = ifact + icnt;
         }
         else
         {
            iNonf = iNonf + icnt;
         }
    }
    return (ifact - iNonf);
}

int main()
{
    int ivalue = 0;
    int iret = 0;
    
    printf("enter number\n");
    scanf("%d",&ivalue);

    iret = FactDiff(ivalue);
    printf("Difference of factors: %d\n",iret);

    return EXIT_SUCCESS;
}
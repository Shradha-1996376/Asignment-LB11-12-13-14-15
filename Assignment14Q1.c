#include<stdio.h>
#include<stdlib.h>

int Multifact(int ino)
{
    int icnt = 0 ;
    int ans = 1;
    
    for(icnt = 1; icnt <= ino/2; icnt++)
    {
         if((ino % icnt) == 0)
         {
          ans = ans * icnt;
         }
    }
    return ans;
}

int main()
{
    int ivalue = 0;
    int iret = 0;
    
    printf("enter number\n");
    scanf("%d",&ivalue);

    iret = Multifact(ivalue);
    printf("multiplication of factors: %d\n",iret);

    return EXIT_SUCCESS;
}
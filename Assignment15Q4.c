#include<stdio.h>
#include<stdlib.h>

int Multiply(int ino1,int ino2,int ino3)
{
    int ians = 1;

    if(ino1 == 0 && ino2 == 0 && ino3 == 0 )
    {
        return 0;
    }
    if(ino1 != 0 )
    {
        ians = ians *ino1;
    }
     if (ino2 != 0)
    {
        ians = ians * ino2;
    }
     if (ino3 != 0)
    {
        ians = ians * ino3;
    }
    return ians;
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0, iret = 0;
    printf("please enter the three number\n");
    scanf("%d %d %d",&ivalue1,&ivalue2,&ivalue3);

    iret = Multiply(ivalue1,ivalue2,ivalue3);
    printf("mutiply is :%d\n",iret);

    return EXIT_SUCCESS;
}
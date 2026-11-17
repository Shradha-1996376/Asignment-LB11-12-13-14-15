#include<stdio.h>
#include<stdlib.h>

void Displaydigit(int ino)
{
    int idigit = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino > 0)
    {
        idigit = ino % 10; 
        printf("%d\n",idigit);
        ino = ino / 10;
    }
}
int main()
{
    int ivalue = 0;
    printf("enter the number\n");
    scanf("%d",&ivalue);

    Displaydigit(ivalue);

    return EXIT_SUCCESS;
}
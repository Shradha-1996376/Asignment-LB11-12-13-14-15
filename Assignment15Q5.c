#include<stdio.h>
#include<stdlib.h>

float Percentage(int ino1, int ino2)
{
   float fans = 0.0f;

    fans =  ((float)ino2 / (float)ino1)*100;
   
   return fans;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0;
    float fret = 0.0f;

    printf("Please enter total marks\n");
    scanf("%d",&ivalue1);

    printf("Please enter obtained marks\n");
    scanf("%d",&ivalue2);

    fret = Percentage(ivalue1, ivalue2);
    printf("Percentage is: %f",fret);

    return EXIT_SUCCESS;
}
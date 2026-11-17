#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name [30];
    printf("please enter full name\n");
    scanf("%[^'\n']s",&name);
    printf("Your name is: %s\n",name);

    return EXIT_SUCCESS;
}
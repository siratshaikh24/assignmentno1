#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Chracter:");
    scanf("%c",&ch);
    printf("previous character:%c\n",ch-1);
    printf("next character:%c\n",ch+1);
    return 0;

}
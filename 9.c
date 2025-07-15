#include<stdio.h>
int main()
{

    int amt, n2000, n500, n100;
    printf("Enter amount: ");
    scanf("%d", &amt);
    n2000 = amt / 2000;
    amt = amt % 2000;
    n500 = amt / 500;
    amt = amt % 500;
    n100 = amt / 100;
    amt = amt % 100;
    printf("2000 notes: %d\n500 notes: %d\n100 notes: %d\nRemaining: %d\n", n2000, n500, n100, amt);
    return 0;
}
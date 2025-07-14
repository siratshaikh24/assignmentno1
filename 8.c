#include<stdio.h>
int main()
{
    float basic,hra,da,pf,tax,net;
    printf("Enter basic salary:");
    scanf("%f",&basic);
    hra=0.10*basic;
    da=0.30*basic;
    pf=0.05*basic;
    tax=0.05*basic;
    net=basic+hra+da-pf-tax;
    printf("Net salary=%.2f\n",net);
    return 0;


}

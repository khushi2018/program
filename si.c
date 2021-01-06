#include<stdio.h>
#include<conio.h>
void main()
{

    int i,p,r,n;
    clrscr();
    printf("Enter principal amount, rate of intrest and no. of years:\n");
    scanf("%d%d%d",&p,&r,&n);
    i=(p*r*n)/100;
    printf("your simple intrest is %d",i);
    getch();
    
}
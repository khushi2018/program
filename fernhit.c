#include<stdio.h>
#include<conio.h>
void main()
{
    float c,f;
    clrscr();
    printf("Enter the Temperature in Centigrade: ");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("Temparature in Fahrenheit is : %f",f);
    getch();
}
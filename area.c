#include<stdio.h>
#include<conio.h>
void main()
{
    int b,h,area;
    clrscr();
    printf("Enter Breath and height of a triangle:\n");
    scanf("%d%d",&b,&h);
    area=3.14*b*h;
    printf("%d is the area of triangle",area);
    getch();
}
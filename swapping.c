#include <stdio.h>
//#include <conio.h> 
void main()
{
    int a,b, temp;
    //clrscr(); 
    printf("Enter two integers \n");
    scanf("%d%d", &a, &b);
    printf("Before Swapping\nFirst variable = %d\nSecond variable = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping\nFirst variable = %d\nSecond variable = %d\n", a, b);
    //getch();
}
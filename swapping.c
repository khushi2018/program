#include <stdio.h>
//#include <conio.h> 
void main()
{
    int a,b, temp;
    //clrscr(); 
    printf("Enter two integersn");
    scanf("%d%d", &a, &b);
    printf("Before Swapping\nFirst variable = %d\nSecond variable = %dn", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping\nFirst variable = %d\nSecond variable = %dn", a, b);
    //getch();
}
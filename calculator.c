#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,add,sub,mul,div;
    clrscr();
    printf("Enter number 1:\n");
    scanf("%d",&n1);
    printf("Enter number 2:\n");
    scanf("%d",&n2);

    add=n1+n2;
    printf("Add = %d",add);

    sub=n1-n2;
    printf("Sub = %d",sub);

    mul=n1*n2;
    printf("Mul = %d",mul);

    div=n1/n2;
    printf("Div = %d",div);
    getch();

}
// 1. Write a program to swap two numbers without using third variable?

#include<stdio.h>
#include<conio.h>

void main()
{
    int a = 10, b = 20;
    clrscr();
    printf("\nBefore swap a=%d b=%d", a,b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter Swap a = %d b = %d", a,b);
    getch();
}
// 2. Write a programm to print fibonacci series without using recursion?

#include<stdio.h>
#include<conio.h>

void main()
{
    int n1=0,n2=1,n3,i,number;
    // clrscr();
    printf("Enter the number of element:");
    scanf("%d",&number);
    printf("\n%d %d",n1,n2);//printing 0 and 1
    for (i=2;i<number;i++)//loop start from 2 because 0 and 1 are alerady printed
    {
        n3 = n1 + n2;
        printf("%d",n3);
        n1 = n2;
        n2 = n3;
    }
    getch();
}
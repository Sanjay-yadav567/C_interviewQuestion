// 9. Write a program to print reverse number uin c?


#include<stdio.h>
#include<conio.h>
void main(){
    int n, reverse=0,rem;
    printf("Enter a number");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    printf("Reverse Number : %d",reverse);
    getch();
    
}
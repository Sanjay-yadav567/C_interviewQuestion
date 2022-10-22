// 6. Write a program to print factorial pf given number without using recursion ?

#include<stdio.h>
#include<conio.h>

void main(){
    int i,fact = 1,number;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(i = 1;i<=number;i++){
        fact = fact*i;
    }
    printf("Factorial of %d is: %d",number,fact);
    getch();
}
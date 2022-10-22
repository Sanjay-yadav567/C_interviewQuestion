// 7. Write a program to print factorial pf given number using recursion ?


#include<stdio.h>
#include<conio.h>

long fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return(n * fact(n-1));
    }
}
void main(){
    int number;
    long facto;
    printf("Enter a number: ");
    scanf("%d",&number);

    facto = fact(number);
    printf("Factorial of %d is %d \n",number,facto);
    getch();
}
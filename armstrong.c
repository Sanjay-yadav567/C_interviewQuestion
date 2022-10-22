// 8. Write a program to print armstrong number uin c?


#include<stdio.h>
#include<conio.h>
void main(){
    int n,r,sum=0,temp;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        r = n%10;
        sum = sum+(r*r*r);
        n = n/10;
    }
    if(temp==sum){
        printf("Armstrong Number");
    }
    else{
        printf("Armstrong Number is not");
        getch();
    }
}
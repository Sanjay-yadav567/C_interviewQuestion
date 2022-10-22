// 4. write a program to check prime number in c programming?

#include<stdio.h>
#include<conio.h>

void main(){
    int n,i,m =0,flag = 0;
    printf("Enter a number to check Prime");
    scanf("%d",&n);
    m = n/2;
    for (i=2;i<=m;i++){
        if(n%i==0){
            printf("Number is not prime");
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("Number is prime");
        getch();
    }
}
// 11. check number is perfect

/* C Program to find Perfect Number using For Loop */

# include <stdio.h>   

int main()   
{   
 int i, Number, Sum = 0 ;   
  
 printf("\n Please Enter any number \n") ;   
 scanf("%d", &Number) ;   
 
 for(i = 1 ; i < Number ; i++)   
  {   
   if(Number % i == 0)   
     Sum = Sum + i ;   
  }    

 if (Sum == Number)   
    printf("\n %d is a Perfect Number", Number) ;   
 else   
    printf("\n%d is not the Perfect Number", Number) ;   

return 0 ;   
}
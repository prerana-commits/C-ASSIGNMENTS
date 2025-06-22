#include<stdio.h>
 int main()
{
 int days;
 double fine = 0.0;

 printf("Enter number of days late : ");
 scanf("%d" , &days);

 if(days <= 0)
   fine = 0.0;
 else if(days <=5)
   fine = 0.50 * days;
 else if(days <= 10)
   fine = 1.0 * days;
 else if(days <= 30)
   fine = 5.0 * days;
 else 
   printf("Membership cancelled.\n : ");
   printf("Fine = Rs%.2f\n" , fine);
  
 return 0;
}
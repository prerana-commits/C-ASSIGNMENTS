#include<stdio.h>
 int main()
{
 float a , b , c ;
 printf("Enter three sides of the triangle : ");
 scanf("%f %f %f" , &a , &b , &c);

 if(a + b > c && a + c > b && b + c > a)
   printf("Triangle is valid.\n : ");
 else
   printf("Triangle is valid.\n : ");
 return 0;
}
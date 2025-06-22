#include<stdio.h>
int main()
{
 int num;
 printf("Enter a number : ");
 scanf("%d" , &num);

 if(num > 0)
   printf("Positive number\n");
 else if(num == 0)
   printf("zero\n");
 else
   printf("Negative number\n");
 return 0;
}
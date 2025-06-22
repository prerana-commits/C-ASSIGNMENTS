#include<stdio.h>
 int main()
{
 int x , y ;
 printf("Enter x and y : ");
 if (scanf("%d %d" , &x , &y) !=2  || x > y )
{
 printf("%d",&x,&y);
}
 printf("\n");
 return 0;
}
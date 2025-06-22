#include<stdio.h>
 int main()
{
  double basic , tax ;
  printf("Enter annual basic salary : ");
  scanf("%1f" , &basic);

  if(basic < 150000.0)
{
  tax = 0.0;
}
  else if(basic <= 3000000.0)
{
  tax = basic * 0.20;
}
  else
{
  tax = basic * 0.30;
}
  printf("Income tax on salary %.2f is : %.2f\n" , basic , tax);
  return 0;
}
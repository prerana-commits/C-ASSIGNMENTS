#include<stdio.h>
 int main()
{
  int emp_id;
  float basic,hra,da,tax,takehome;
  printf("Enter employee id and basic salary : ");
  scanf("%d %f" , &emp_id,&basic);
  
  if(basic>0)
{
  hra = 0.10*basic;
  da = 0.30*basic;
  tax = 0.05*basic;
  takehome = basic+hra+da+tax;
  printf("take home salary for employee %d = %.2f\n",emp_id,takehome);
}
  else
{
  printf("invalid basic salary :\n");
}
  return 0 ;
}
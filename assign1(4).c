#include<stdio.h>
 int main()
{
  double u , a , t , v , s ;
  printf("Enter initial velocity (u) : ");
  scanf("%1f" , &u);
  printf("Enter acceleration (a) : ");
  scanf("%1f" , &a);
  printf("Enter time (t) : ");
  scanf("%1f" , &t);
  v = u + a * t ;
  s = u * t + 0.5 * a * t * t ;
  printf("\nFinal velocity (v) : %.2f\n" , v);
  printf("Distance traveled (s) : %.2f\n" , s);

  return 0;
}
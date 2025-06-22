#include<stdio.h>
 int main()
{
  int m1 , m2 , m3 ;
  int total ;
  float avg , per ;

  printf("Enter marks for three subjects : ");
  scanf("%d%d%d" , &m1 , &m2 , &m3);
  printf("Invalid input : ");
  scanf("%d" , &m1 , &m2 , &m3);

  total = m1 + m2 + m3 ;
  avg = total / 3.0f;
  per = (avg);
  total / 300 * 100;

  printf("\nTotal marks = %d\n" , total);
  printf("Averege = %.2f\n" , avg);
  printf("Percentage = %.2f%%\n" , per);

  if(per >= 60.0f)
    printf("class 1\n");
  else if(per >= 48.0f)
    printf("class ll\n");
  else if(per >= 36.0f)
    printf("Pass class\n");
  else 
    printf("Fail\n");
  return 0;
}
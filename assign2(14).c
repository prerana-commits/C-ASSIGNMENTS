#include<stdio.h>
 int main()
{
  int x , y ;
  printf("Enter co-ordinates (x,y) : ");
  scanf("%d %d" , &x , &y);

  if(x == 0 && y == 0)
    printf("At the origin\n : ");
  else if (x > 0 && y > 0)
    printf("1st Quadrant\n : ");
  else if(x < 0 && y > 0)
    printf("2nd Quadrant\n : ");
  else if(x < 0 && y < 0)
    printf("3rd Quadrant\n");
  else if(x > 0 && y < 0)
    printf("4th Quadrant\n");
  else if(x == 0)
    printf("On the y-axis\n");
  else if(y == 0)
     printf("On the x-axis\n");
  else
     return 0;     
    
}
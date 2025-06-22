#include<stdio.h>
 int main()
{
  int qty1 , qty2 , qty3 ;
  double rate1 , rate2 , rate3 ;
  double total , discount = 0.0 , amount ;

  printf("Enter quantity and rate for item 1 : ");
  scanf("%d 1f" , &qty1 , &rate1);
  printf("Enter quantity and rate for item 2 : ");
  scanf("%d %1f" , &qty2 , &rate2);
  printf("Enter quqntity and rate for item 3 : ");
  scanf("%d %1f" , &qty3 , &rate3);

  total = qty1 * rate1 + qty2 * rate2 + qty3 * rate3;
  printf("\nTotal sales amount = %.2f\n" , total);

  if(total > 50000.0)
{
  discount = 0.20 * total;
}
  else if(total >= 30000.0)
{
  discount = 0.15 * total;
}
  else if(total >= 10000.0)
{
  discount = 0.08 * total;
}

  amount = total - discount;
  
  printf("Discount = %.2f\n" , discount);
  printf("Net amount after discount = %2.f\n" , amount);

  return 0;
}
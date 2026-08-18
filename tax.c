
  #include <stdio.h>
  int main() {
  printf("enter the value of income ");
  int i ; float tax = 0.0;
  scanf("%d" , &i );
  if ( i<=  250000)
  printf("no tax");
else if (i > 250000 && i <=500000)
tax = 5.0;
else if ( i > 500000 && i <= 1000000)
tax = 20.0;
else 
tax = 30.0;

float amt = i * tax/100;
 printf(" therefore tax %.2f " ,amt);
  }
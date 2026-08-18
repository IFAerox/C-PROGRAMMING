#include <stdio.h>
void sum(int a, int b )

{
    int sum = a + b ;
    printf("the sum is %d \n " , sum );
}

void average(int a , int b )
{
    float avg = (a+b)/2.0;
    printf( " the average is %f :" , avg );
}
int main (){    int x=4 ;int y = 10;
    sum(x,y);
     average(x,y);
    return 0 ;
}
#include <stdio.h>
int main ()
{
    int i = 2 ;
    int* ptr = &i;
    printf("the address of i is %u",&i);
    printf("the value of i is %d",*ptr);
    return 0;

}
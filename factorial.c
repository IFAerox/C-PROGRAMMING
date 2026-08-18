#include <stdio.h>
unsigned int zero( unsigned int n )
{ 
    if(n == 0 || n == 1 )
    {
        return 1;
    }
 else {
    return n * zero(n-1);
 }
}
int main (){
    int a,b,c,d;
    printf("enter the value of :");
    scanf("%d" , &a );
    b = zero(a);
    printf(" the ans is %d " , b);
}
#include<stdio.h>

int main() {
    int a;
    char c;
    printf("enter the number");
    scanf("%d", &a);
    printf( "value of a is %d \n", a);
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i = 0; i<=n ; i++){
        printf("%d \n" ,i);
    }
   
    return 0;

}
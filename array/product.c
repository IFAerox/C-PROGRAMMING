#include <stdio.h>
int main()
{
    int ans=1;
    int arr[7]={1,2,3,4,4,56,6};

    for ( int i = 0 ; i <7;i++)
    {
        ans = ans * arr[i];
    } 
    printf( "%d" ,ans);   
    return 0;
}

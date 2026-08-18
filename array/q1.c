#include <stdio.h>
int main(){
    int arr[5]={100,234,12,25,40};
    for(int i = 0 ;i<5;i++)
    {
        if (arr[i] < 35){
        printf("roll number %d", i+1);
        }
    }
}
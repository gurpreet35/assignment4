//Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main(){
    int i;
    printf("10 odd natural number is:");
    for ( i = 20; i >0 ; i--)
    { 
        if (i%2!=0)
    {   
    
        printf("%d ",i);
    }   
    }
    
return 0;
}
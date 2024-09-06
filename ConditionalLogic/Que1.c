Que 1) Write a C program to accept two integers and check 
whether they are equal or not

#include<stdio.h>
int main()
{
    int a ,b ;
    printf("enter the a: ");
    scanf("%d",& a);
    printf("enter the b: ");
    scanf("%d",& b);
    if(a==b)
    {
        printf("eqal"); 
    }else
    {
        printf("not eqal");
    }
    
}
Que 7)  Accept marks from user and check pass or fail

#include<stdio.h>
int main()
{
    int marks;  
    printf("enter the marks: ");
    scanf("%d",& marks);
    if( marks >=50 )
    {
        printf("pass");
    }else
    {
        printf("fail");
    }
}
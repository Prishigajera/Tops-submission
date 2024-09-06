Que 8) WAP to accept the height of a person in centimeters and categorize the
person according to their height.

#include<stdio.h>
int main()
{
    int height;
    printf("enter the height in centimiter: ");
    scanf("%d",&height);
    if(height>150)
    {
        printf("enter the category:short ");
    }else if(height<180)
    {
       printf("enter the category:average"); 
    }else
    {
        printf("enter the category:tall");
    }
}


Que 7) Find area of Rectangle Formula : A=wl


Ans)

#include<stdio.h>
int main()
{
    float width,length,area;
    printf("enter the width of rectangle: ");
    scanf("%f",&width);
    printf("enter the length of rectangle: ");
    scanf("%f",&length);
    area = width * length;
    printf("the area of rectangle is: %.2f\n",area);
    return 0;
}
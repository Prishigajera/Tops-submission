Que 29) Convert minutes into seconds and hours

#include <stdio.h>

int main() {
    float   minute,second,hour;
    printf ("enter the minute : ");
    scanf("%f",&minute);
    second = minute * 60;
    hour = minute /60;
    printf("second is : %.2f\n",second);
    printf("hour is : %.2f",hour);
    return 0;
}

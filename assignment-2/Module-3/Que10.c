10 ) find the area of a rectangular prism formula : A=2(wl+hl+hw)

Ans)
#include <stdio.h>
int main()
 {
    float width, length, height, surface_area;
    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &width);
    printf("Enter the length of the rectangular prism: ");
    scanf("%f", &length);
    printf("Enter the height of the rectangular prism: ");
    scanf("%f", &height);
    surface_area = 2 * (width * length + length * height + height * width);
    printf("The surface area of the rectangular prism is: %.2f\n", surface_area);
    return 0;
}

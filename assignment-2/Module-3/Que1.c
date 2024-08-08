                    # Basic Logic Program #

1)Display This Information using printf
    a. Your Name
    b. Your Birth date
    c. Your Age
    d. Your Address

Ans)

#include <stdio.h>

int main() {

    char name[] = "prishi";
    char birthDate[] = "2nd may,2004";
    int age = 21;
    char address[] = "surat";

    
    printf("a. Your Name: %s\n",name);
    printf("b. Your Birth date: %s\n",birthDate);
    printf("c. Your Age: %d\n",age);
    printf("d. Your Address: %s\n",address);

    return 0;
}

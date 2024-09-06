Que 15) Convert school’s name in abbreviated form

#include <stdio.h>
int main() 
{
    char name[100];
    int i = 0;
    printf("Enter the school's name: ");
    fgets(name, sizeof(name), stdin);
    if (name[0] != '\0' && isalpha(name[0])) 
    {
        printf("%c", toupper(name[0]));
    }
    while (name[i] != '\0') 
    {
        if (name[i] == ' ' && isalpha(name[i + 1])) 
        {
            printf("%c", toupper(name[i + 1]));
        }
        i++;
    }
    printf("\n");
    return 0;
}
    
/*Que 8) WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
and age
b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage*/

//A) 
#include<stdio.h>
struct employee{
    int empno;
    char ename[20];
    char address;
    float age;
};
int main(){
    struct employee s[2] ;
    int i;
    for(i=0;i<2;i++){
    printf("Enter empno:");
    scanf("%d",&s[i].empno);
    printf("Enter ename:");
    scanf("%s",&s[i].ename);
    printf("Enter address:");
    scanf("%s",&s[i].address);
    printf("Enter age:");
    scanf("%f",&s[i].age);

    }
    printf("\n employee details:\n");
    for(i=0;i<2;i++){
        printf("\n employee %d",i);
        printf("\n empno:%d",s[i].empno);
        printf("\n eName=%s",s[i].ename);
        printf("\n address=%c",s[i].address);
         printf("\n age=%f",s[i].age);
    }  
}


B)  

include<stdio.h>
struct employee{
    int empno;
    char ename[20];
    char address;
    float age;
};
int main(){
    struct employee s[5] ;
    int i;
    for(i=0;i<5;i++){
    printf("Enter empno:");
    scanf("%d",&s[i].empno);
    printf("Enter ename:");
    scanf("%s",&s[i].ename);
    printf("Enter address:");
    scanf("%s",&s[i].address);
    printf("Enter age:");
    scanf("%f",&s[i].age);

    }
    printf("\n employee details:\n");
    for(i=0;i<5;i++){
        printf("\n employee %d",i);
        printf("\n empno:%d",s[i].empno);
        printf("\n eName=%s",s[i].ename);
        printf("\n address=%c",s[i].address);
         printf("\n age=%f",s[i].age);
    }  
}
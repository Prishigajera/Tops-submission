Que 9) WAP to show difference between Structure and Union.

Union: 

#include<stdio.h>
union student{
    int rollno;
    char name[20];
    float percent;
};

int main(){
    union student s[3] ;
    int i;
    for(i=0;i<3;i++){
    printf("Enter rollno:");
    scanf("%d",&s[i].rollno);
    printf("Enter name:");
    scanf("%s",&s[i].name);
    printf("Enter percent:");
    scanf("%f",&s[i].percent);
    }
    printf("\n Student details:\n");
    for(i=0;i<3;i++){
        printf("\n Student %d",i);
        printf("\n Rollno:%d",s[i].rollno);
        printf("\n Name=%s",s[i].name);
        printf("\n Percent=%.2f",s[i].percent);
    }  
}


Structure: 

#include<stdio.h>
structure student{
    int rollno;
    char name[20];
    float percent;
};
int main(){
    structure student s[3] ;
    int i;
    for(i=0;i<3;i++){
    printf("Enter rollno:");
    scanf("%d",&s[i].rollno);
    printf("Enter name:");
    scanf("%s",&s[i].name);
    printf("Enter percent:");
    scanf("%f",&s[i].percent);
    }
    printf("\n Student details:\n");
    for(i=0;i<3;i++){
        printf("\n Student %d",i);
        printf("\n Rollno:%d",s[i].rollno);
        printf("\n Name=%s",s[i].name);
        printf("\n Percent=%.2f",s[i].percent);
    }  
}
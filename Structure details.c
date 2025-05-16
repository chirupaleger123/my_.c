#include<stdio.h>
struct student{
    char name[15];
    int roll;
    float marks;
    };
    struct student s1;
    int main(){
        printf("enter a name\n");
        scanf("%s",s1.name);
        printf("enter a roll\n");
        scanf("%d",&s1.roll);
        printf("enter a marks\n");
        scanf("%f",&s1.marks);
        printf("\nstudent details\n");
        printf("name:%s\nroll:%d\nmarks:%2f\n",s1.name,s1.roll,s1.marks);
    }

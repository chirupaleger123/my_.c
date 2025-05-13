#include<stdio.h>
int main(){
int marks;
printf("enter the value of marks\n");
scanf("%d",&marks);
if(marks>85)
printf("grade:A\n");
else if(marks>=70)
printf("grade:B\n");
else if(marks>=60)
printf("grade:C\n");
else if(marks>=50)
printf("grade:D\n");
else if(marks>=40)
printf("grade:E\n");
else if(marks>=35)
printf("just pass\n");
else
printf("Fail\n");
return 0;
}


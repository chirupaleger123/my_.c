// Online C compiler to run C program online
#include <stdio.h>
int main(){
int num;
printf("enter the value of num\n");
scanf("%d",&num);
if(num>=10&&num<=100){
    printf("the enter number %d is within the range of 10 to 100\n");
}
else{
    printf("the entered number %d is not within the range of 10 to 100\n");
}
return 0;    
}

#include<stdio.h>
#include<string.h>

int main(){
char name[20];
printf("Enter Your Name:");
scanf("%s",&name);
int length =strlen(name);
printf("Length of your name:%d\n",length);
strcpy(name,"kubendra.T");
printf("%s\n",name);
int comparision=strcmp("chiru","chiranjeevi.r");
printf("%d\n",comparision);
strcat(name,"coder");
printf("%s\n",name);
    return 0;
}

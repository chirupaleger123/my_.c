#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4},i;
    int *chi=arr;
    for(i=0;i<5;i++){
    printf("%d ",*(chi+1));
    printf("%p ",chi+1);
}
}

#include <stdio.h>
#define PI 3.14
float area(float r){
    return PI*r * r;
}
int main(){
     float r;
    printf("Enter the radius of the circle\n");
    scanf("%f",&r);
    float Area=area(r);
    printf("The area of the circle is %.3f\n",Area);
    return 0;
}

#include<stdio.h>
int main(){
    float a,b,area;
    printf("Enter the sides of triangle:");
    scanf("%f%f",&a,&b);
    area=(1.0/2)*a*b;
    printf("the area of triangle is:%f",area);
    return 0;
}

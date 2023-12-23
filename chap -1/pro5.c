#include<stdio.h>
int main(){
    float l,b,r,area,ar,per;
    printf("enter the lenght and breadth of rectangle:\n");
    scanf("%f%f",&l,&b);
    printf("Enter the radius of circle:\n");
    scanf("%f",&r);
    area=l*b;
    printf("%f\n",area);
    ar=3.14*r*r;
    printf("area of the circle:\n%f",ar);
    per=2*3.14*r;
    printf("perimeter of the circle:\n%f",per);
    return 0;
}

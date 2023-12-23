#include<stdio.h>
#include<math.h>
int main(){
    float a,b,r,t;
    printf("Enter the co-ordinates:");
    scanf("%f%f",&a,&b);
    r=sqrt(a*a+b*b);
    t=atan(b/a);
    printf("the polar co-ordinates are:%f,%f",r,t);
    return 0;
}

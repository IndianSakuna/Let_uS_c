#include<stdio.h>
int main(){
float a,b,c,d,e,f,g;
scanf("%d",&a);
printf("a is the distance of city 1:%d\n",&a);
scanf("%d",&b);
printf("b is the distance of city 1:%d\n",&b);
c= a-b;
d=c*1000;
printf("distance in meters:%d\n",&d);
e=c*3281;
printf("distance in feet%d\n",&e);
f=c*39370;
printf("distance in inches%d\n",&f);
g=c*100000;
printf("distance in cm%d\n",&g);
return 0;
}

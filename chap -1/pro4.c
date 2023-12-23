#include<stdio.h>
int main(){
    float temp,c;
    printf("write the temp:\n");
    scanf("%f\n",&temp);
    c = (temp - 32) * 5/9;
    printf("temperature in celsius:%d",c);
    return 0;
}

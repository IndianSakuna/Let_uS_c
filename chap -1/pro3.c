#include<stdio.h>
int main(){
    float eng,math,comp,sst,sci,avg;
    printf("Enter the marks of stuents\n");
    scanf("%f%f%f%f%f",&eng,&math,&comp,&sst,&sci);
    avg=(eng+math+comp+sst+sci)/5;
    printf("%f\n",avg);
    int perc=((eng+math+comp+sst+sci)/500)*100;
    printf("%d\n",perc);
    return 0;


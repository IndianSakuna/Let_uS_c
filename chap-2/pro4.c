#include<stdio.h>
#include<math.h>
int main(){
    float L1,L2,G1,G2,D;
    printf("Enter the latitude:");
    scanf("%f%f",&L1,&L2);
    printf("Enter the longitude:");
    scanf("%f%f",&G1,&G2);
    D = 3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
    printf("distance in nautical miles is:%f",D);
    return 0;

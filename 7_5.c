#include<stdio.h>

int main(){
    float A,B,C,m,n;
    scanf("%f\n%f",&m,&n);
    B=(6*n-8*m)/(n-m);
    A=(8-B)*m;
    C=A/(10-B);
    printf("Original number of visitors: %.1f\n",A);
    printf("New arriavlas per minute: %.1f\n",B);
    printf("Check time when 10 gates are opened: %.1f",C);
}

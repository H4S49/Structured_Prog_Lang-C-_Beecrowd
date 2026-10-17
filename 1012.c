#include<stdio.h>
int main(){
    double A,B,C,pi=3.14159,tri,cir,tra,qua,ret;
    scanf("%lf %lf %lf", &A,&B,&C);
    tri=0.5*A*C;
    cir=pi*C*C;
    tra=0.5*(A+B)*C;
    qua=B*B;
    ret=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,tra,qua,ret);






return 0;
}






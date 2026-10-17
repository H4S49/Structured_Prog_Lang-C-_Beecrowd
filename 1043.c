#include<stdio.h>
int main(){
    double A,B,C,P,area;
    scanf("%lf %lf %lf",&A,&B,&C);
    P = A+B+C;
    area = 0.5*(A+B)*C;

    if(((A+B)>C) && ((B+C)>A) && ((C+A)>B)){
        printf("Perimetro = %.1lf\n",P);
    }
    else{
        printf("Area = %.1lf\n",area);
    }

return 0;
}
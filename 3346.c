#include<stdio.h>
int main(){
    double a,b,result;
    scanf("%lf %lf",&a,&b);

    // (1+(a/100)x(1+(b/100)-1)x100
    // a+b+ (axb)/100

    result = a+b+((a*b)/100);
    printf("%.6lf\n",result);



    return 0;
}
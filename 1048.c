#include<stdio.h>
int main(){
    double a;
    scanf("%lf",&a);
    
    if(a>=0 && a<=400.00){
        printf("Novo salario: %.2lf\n",a+a*.15);
        printf("Reajuste ganho: %.2lf\n",a*.15);
        printf("Em percentual: 15 %%\n");
    }
    else if(a>400.00 && a<=800.00){
        printf("Novo salario: %.2lf\n",a+a*.12);
        printf("Reajuste ganho: %.2lf\n",a*.12);
        printf("Em percentual: 12 %%\n");
    }
    else if(a>800.00 && a<=1200.00){
        printf("Novo salario: %.2lf\n",a+a*.10);
        printf("Reajuste ganho: %.2lf\n",a*.10);
        printf("Em percentual: 10 %%\n");
    }
    else if(a>1200.00 && a<=2000.00){
        printf("Novo salario: %.2lf\n",a+a*.07);
        printf("Reajuste ganho: %.2lf\n",a*.07);
        printf("Em percentual: 7 %%\n");
    }
    else{
        printf("Novo salario: %.2lf\n",a+a*.04);
        printf("Reajuste ganho: %.2lf\n",a*.04);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
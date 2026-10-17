#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,formula1,formula2;
    scanf("%lf %lf %lf", &a,&b,&c);


    if(a != 0 && (b*b - 4*a*c) >= 0){
    formula1= (-b + sqrt(b*b - 4*a*c)) / (2*a);;
    formula2= (-b - sqrt(b*b - 4*a*c)) / (2*a);;
    printf("R1 = %.5lf\n",formula1);
    printf("R2 = %.5lf\n",formula2);
    }

    else
        printf("Impossivel calcular\n");

    // if(a == 0 || (b*b - 4*a*c) < 0){
    //     printf("Impossivel calcular\n");
    
    // }

    // else{
    //     formula1= (-b + sqrt(b*b - 4*a*c)) / (2*a);;
    //     formula2= (-b - sqrt(b*b - 4*a*c)) / (2*a);;
    //     printf("R1 = %.5lf\n",formula1);
    //     printf("R2 = %.5lf\n",formula2);
    // }



    
return 0;
}
#include <stdio.h>
int main(){
    double N1,N2,N3,N4,N,Media,Mlf;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    Media = (N1*2+N2*3+N3*4+N4*1)/(10.0);
    printf("Media: %.1lf\n",Media);
    if(Media>=7.0)
        printf("Aluno aprovado.\n");
    if(Media<5.0)
        printf("Aluno reprovado.\n");
    if(Media>5.0 && Media<6.9)
        printf("Aluno em exame.\n");
    

    scanf("%lf",&N);
    printf("Nota do exame: %.1lf\n",N);
    Mlf=(N+Media)/2;
    if(Mlf>=5)
        printf("Aluno aprovado.\n");
    if(Mlf<=4.9)
        printf("Aluno reprovado.\n");
    printf("Media final: %.1lf\n",Mlf);

    return 0;

    

        

    

}
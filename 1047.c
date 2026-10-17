#include<stdio.h>
int main(){
    int a,b,c,d,h,m,h1,m1,h2,m2,h3,m3,m4,m5;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(c>a && d>b){
        h = c-a;
        m = d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(c>a && b>d){
        h1 = c-a-1;
        m1 = (60-b)+d;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h1,m1);
    }
    else if(a>c && d>b){
        h2 = (24-a)+c;
        m2 = (60-b)+d;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2,m2);
    }
    else if(a>c && b>d){
        h3 =  ((24-a)+c)-1;
        m3 = (60-b)+d;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h3,m3);
    }
    else if(a==c && d>b){
        m4= d-b;
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",m4);
    
    }
    else if(a==c && b>d){
        m5=(60-b)+d;
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",m5);
    }
    else
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

        
    

return 0;
}

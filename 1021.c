#include <stdio.h>

int main() {
   double x;
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
   int A,B,C,D,E,F,G,H,I,J;
   scanf("%lf",&x);

   a = (int)x;
   b = (int)((x-a)*100+.5);

   //note portion

   c=a/100;
   d=a%100;
   printf("NOTAS:\n%d nota(s) de R$ 100.00\n",c);
   e=d/50;
   f=d%50;
   printf("%d nota(s) de R$ 50.00\n",e);
   g=f/20;
   h=f%20;
   printf("%d nota(s) de R$ 20.00\n",g);
   i=h/10;
   j=h%10;
   printf("%d nota(s) de R$ 10.00\n",i);
   k=j/5;
   l=j%5;
   printf("%d nota(s) de R$ 5.00\n",k);
   m=l/2;
   n=l%2;
   printf("%d nota(s) de R$ 2.00\n",m);
   o=n/1;
   printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",o);

   //coin portion

   A=b/50;
   B=b%50;
   printf("%d moeda(s) de R$ 0.50\n",A);
   C=B/25;
   D=B%25;
   printf("%d moeda(s) de R$ 0.25\n",C);
   E=D/10;
   F=D%10;
   printf("%d moeda(s) de R$ 0.10\n",E);
   G=F/5;
   H=F%5;
   printf("%d moeda(s) de R$ 0.05\n",G);
   I=H/1;
   printf("%d moeda(s) de R$ 0.01\n",I);



   return 0;
}

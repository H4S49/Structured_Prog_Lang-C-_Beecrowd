#include<stdio.h>
int main(){
    int a,x,X,y,z;
    scanf("%d",&a);
    x=a/365;
    X=a%365;
    y=X/30;
    z=X%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",x,y,z);
    return 0;
}




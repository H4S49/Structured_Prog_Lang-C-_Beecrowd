#include<stdio.h>
int main(){
    int z,a,b,x,y;
    while(scanf("%d:%d",&a,&b)!=EOF){
        x=8*60;
        y=a*60+b;
        z=x-y;
        if(z>=60) printf("Atraso maximo: 0\n");
        else printf("Atraso maximo: %d\n",60-z);
    }
    return 0;
}
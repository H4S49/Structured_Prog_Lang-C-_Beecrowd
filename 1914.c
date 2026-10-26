#include<stdio.h>
#include<string.h>

int main(){
    int n,i;
    long long int a,b,sum;
    char c1[1000],c2[1000],c3[1000],c4[1000];
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%s %s %s %s %lld %lld",c1,c2,c3,c4,&a,&b);

        sum=(a+b)%2==0;

        if ((sum && strcmp(c2, "PAR") == 0) || (!sum && strcmp(c2, "IMPAR") == 0)) printf("%s\n",c1);
        else printf("%s\n",c3);
    }
    return 0;
}
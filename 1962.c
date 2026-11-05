#include<stdio.h>
int main(){
    int n,i,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        if(m>=2015) printf("%d A.C.\n",m-2014);
        else if(m<2015) printf("%d D.C.\n",2015-m);

    }



    return 0;
}
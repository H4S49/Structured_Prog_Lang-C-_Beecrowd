#include<stdio.h>
#include<string.h>

int main(){
    int n,i,x;
    char ch[1000];
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%s %d",&ch,&x);
        if(strcmp(ch, "Thor")==0) printf("Y\n");
        else printf("N\n");
    }




    return 0;
}
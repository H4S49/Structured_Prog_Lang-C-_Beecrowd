#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char new[1000];
    scanf("%d",&n);

    while(n--){
        scanf("%s",new);
        if(strcmp(new,"Batman")==0) printf("N\n");
        else printf("Y\n");

    }


    return 0;
}
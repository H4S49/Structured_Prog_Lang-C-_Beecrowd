#include<stdio.h>
#include<string.h>
int main(){
    char ch[9999];
    scanf("%s",ch);

    int len = strlen(ch);

    if(len >= 10 ) printf("palavrao\n");
    else printf("palavrinha\n");


    return 0;
}
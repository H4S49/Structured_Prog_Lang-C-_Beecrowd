#include<stdio.h>
#include<string.h>

int main(){
    char ch[999999],ch1[99999];
    scanf("%s %s",ch,ch1);

    int len =  strlen(ch);
    int len1 =  strlen(ch1);

    if(len>=len1) printf("go\n");
    else printf("no\n");






    return 0;
}
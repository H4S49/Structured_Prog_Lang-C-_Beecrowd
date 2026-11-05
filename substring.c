#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);

    int size = strlen(str);

    for(int i=1;i<=size;i++){
        printf("%d",str[i]);
    }
    

}
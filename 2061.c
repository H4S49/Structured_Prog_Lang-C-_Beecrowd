#include<stdio.h>
#include<string.h>
int main(){
    int x,y;
    char tab[1000];
    scanf("%d %d",&x,&y);

    for(int i=1;i<=y;i++){
        scanf("%s",tab);

        if(strcmp(tab,"fechou")==0){
            x++;
        }
        if(strcmp(tab,"clicou")==0){
           x--;
        }
        
    }
    printf("%d\n",x);
}
#include<stdio.h>
int main(){
    int a=5,b=3;
    for(int i=1;i<=9;i+=2){
        a=a+2;b=b+2;
        for(int j=a;j>=b;j--){
            printf("I=%d J=%d\n", i, j);

        }

    }



    return 0;
}
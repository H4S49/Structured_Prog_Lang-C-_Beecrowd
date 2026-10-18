#include <stdio.h>
int main(){
    int X, Y, sum1, sum2;
    scanf("%d %d", &X, &Y);
    
    if (X < Y){
        sum1=0;
        for (int i = X; i <= Y; i++){
            if (i % 13 != 0){
                sum1 = sum1 + i;
                
            }
           
        }
        printf("%d\n", sum1);
    }
    else if(X>Y){
        sum2=0;
        for (int j = X; j >= Y; j--){
            if (j % 13 != 0){
                sum2 = sum2 + j;
                
            }
        }
        printf("%d\n", sum2);
    }
    else printf("0\n");
    return 0;
}

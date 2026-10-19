#include<stdio.h>
#include<math.h>
int main(){
    int N,i,j;
    scanf("%d",&N);

    for(i=1;i<=N*2;i++){
        if(i%2!=0){
        for(j=1;j<=3;j++){
            if(j<3) printf("%d ",(int)pow(i , j));
            else  printf("%d",(int)pow(i , j));
        }
        printf("\n");
    }
    }

   


    return 0;
}
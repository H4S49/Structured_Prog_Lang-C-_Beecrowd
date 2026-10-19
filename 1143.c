#include<stdio.h>
#include<math.h>
int main(){
    int N,i,j;
    scanf("%d",&N);

    for(i=1;i<=N;i++){
        for(j=1;j<=3;j++){
            if(j<3) printf("%d ",(int)pow(i , j));
            else  printf("%d",(int)pow(i , j));
        }
        printf("\n");
    }

   
        // if (j == 3) printf("%d", (int)pow(i, j));
        // else printf("%d ", (int)pow(i, j));



    return 0;
}
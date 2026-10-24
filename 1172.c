#include<stdio.h>
int main(){
    int i,j,X[10];

    for(i=0;i<10;i++){
        scanf("%d",&X[i]);
}

for(j=0;j<10;j++){
    if(X[j]<=0)
    printf("X[%d] = %d\n",j,1);
    else
    printf("X[%d] = %d\n",j,X[j]);
}

return 0;
}
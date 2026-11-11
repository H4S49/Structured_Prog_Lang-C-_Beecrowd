#include<stdio.h>
int main(){
    int n,new1,new2,new3,new4;
    scanf("%d",&n);

    if(n%2==0){
        new1=(n*n)/2;
        printf("%d casas brancas e %d casas pretas\n",new1,new1);
    }
    else if(n%2!=0){
        new2=n*n; //3x3=9
        new3=new2/2; // 9/2=4
        new4=new2-new3; //9-4=5
        printf("%d casas brancas e %d casas pretas\n",new4,new3);
    }


    return 0;
}
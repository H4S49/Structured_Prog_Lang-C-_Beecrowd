#include<stdio.h>
int main(){
    int i,x,z,count,sum;
    scanf("%d",&x); //x==3;

    while(1){
        scanf("%d",&z); //z==20;

        if(x<z){
            sum=0,count=0;
            for(i=x;sum<z;i++){
            count++;
            sum=sum+i;
        }
        printf("%d\n",count);
        break;
        }
        else if(x>=z){
            continue;
        }


    }




    return 0;
}
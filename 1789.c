#include<stdio.h>
int main(){
    int n,m,count,count1,count2;
    
    while(scanf("%d",&n)!=EOF){
        count=0,count1=0,count2=0;
        for(int i=1;i<=n;i++){
        scanf("%d",&m);

        if(m<10){
            count++;
        }
        else if(m>=10 && m<20){
            count1++;
        }
        else if(m>=20){
            count2++;
        }
    }
        if(count2>=1) printf("3\n");
        else if(count1>=1) printf("2\n");
        else printf("1\n");

    }
    return 0;
}
#include<stdio.h>

int main(){
    int n;
    double arr[9999];
    while(scanf("%d",&n)!=EOF){

    for(int i=0;i<n;i++){
        scanf("%lf",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) printf("%.2lf\n",arr[i+1]);
    }
    
}



    return 0;
}
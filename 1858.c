#include<stdio.h>
int main(){
    int n,m,i,j,index=1,arr[10000];
    scanf("%d",&n);
        for (i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int a = arr[1];
    for (j = 1; j <= n; j++)
    {
        if (arr[j] < a)
        {
            a = arr[j];
            index = j;
        }
    }
 

printf("%d\n", index);

    return 0;
}
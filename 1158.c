#include<stdio.h>
int main()
{
    int N,X,Y,sum=0,A;
    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        sum=0;
        scanf("%d %d",&X,&Y);
        A=X+1;

        if(X%2==0)
        {
            for(int j=A; j<=(A+(Y-1)*2); j+=2)
            {
                sum = sum+j;

            }

        }
        else
            for(int k=X; k<=(X+(Y-1)*2); k+=2)
            {
                sum = sum+k;

            }
            printf("%d\n",sum);

    }



    return 0;
}

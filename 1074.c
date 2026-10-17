// #include <stdio.h>
// int main()
// {
//     int N, X;
//     scanf("%d", &N);

//     for (int i = 1; i <= N; i++)
//     {
//         scanf("%d", &X);

//         if (X % 2 != 0 && X == 0)
//             printf("NULL\n");
//         else if (X % 2 != 0 && X < 0)
//             printf("ODD NEGATIVE\n");
//         else if (X % 2 != 0 && X > 0)
//             printf("ODD POSITIVE\n");
//         else if (X % 2 == 0 && X < 0)
//             printf("ODD NEGETIVE\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// #define H printf("Hellllllllllllllllllllllllllllllllllllllllllllllo")

// int main(){
//     H;
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a = 1, b = 1, sum = 1;
    printf("The 1th fibonacci is %d\n", a);
    printf("The 2th fibonacci is %d\n", b);
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("The %dth fibonacci is %d\n", n, sum);
    }
    return 0;
}
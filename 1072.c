// #include<stdio.h>
// int main(){
//     int N,i,X,count=0,count1=0;
//     scanf("%d",&N);
//     for(i=0;i<N;i++){
//         scanf("%d",&X);
//         if(X>=10 && X<=20)
//             count++;
//         else
//             count1++;
//     }
    
//         printf("%d in\n",count);
//         printf("%d out\n",count1);


//         return 0;
// }

#include <stdio.h>

int main() {
    int arr[100];
    int high[100], low[100];
    int i, j, temp;

    // Input 100 integers
    for (i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        high[i] = arr[i];
        low[i] = arr[i];
    }

    // Sort high array in descending order
    for (i = 0; i < 100; i++) {
        for (j = i + 1; j < 100; j++) {
            if (high[i] < high[j]) {
                temp = high[i];
                high[i] = high[j];
                high[j] = temp;
            }
        }
    }

    // Sort low array in ascending order
    for (i = 0; i < 100; i++) {
        for (j = i + 1; j < 100; j++) {
            if (low[i] > low[j]) {
                temp = low[i];
                low[i] = low[j];
                low[j] = temp;
            }
        }
    }

    // Print highest values
    printf("Highest Values:\n");
    for (i = 0; i < 100; i++) {
        if (i < 3 || i >= 97) {
            printf("%dth Highest = %d\n", i + 1, high[i]);
        }
        else if (i == 3) {
            printf("...\n");
        }
    }

    // Print lowest values
    printf("\nLowest Values:\n");
    for (i = 0; i < 100; i++) {
        if (i < 3 || i >= 97) {
            printf("%dth Lowest = %d\n", i + 1, low[i]);
        }
        else if (i == 3) {
            printf("...\n");
        }
    }

    return 0;
}
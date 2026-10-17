#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);

    char *month[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

    printf("%s\n",month[i-1]);


    return 0;
}

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=2;i++){
//         for()
//         printf("%c > ",(char)i);
//         printf("%d\n",i);
//     }
// }
#include <stdio.h>
int main()
{
    char T[99999];
    scanf("%[^\n]", T);
    int size = strlen(T);
    if(size<=140) printf("TWEET\n");
    if(size>140) printf("TWEET\n");
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[9999];
    int flag = 0;

    scanf("%s", ch);
    int len = strlen(ch);

    for (int i = 0; i < len; i++)
    {
        if (ch[i] == '1' && ch[i + 1] == '3')
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("%s es de Mala Suerte\n", ch);
    else
        printf("%s NO es de Mala Suerte\n", ch);

    return 0;
}
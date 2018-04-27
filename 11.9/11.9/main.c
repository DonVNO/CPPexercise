#include <stdio.h>
#include <string.h>
#define SIZE 256
char* up_side_down(char *);
int main(void)
{
    char test[SIZE];
    printf("Input a sentence:\n");
    while(1)
    {
        fgets(test, SIZE, stdin);
        fputs(up_side_down(test), stdout);
        printf("\nNext input?");
    }
    return 0;
}

char* up_side_down(char*ch)
{
    int length = (int)strlen(ch);
    char temp[length];
    for (int i = 0; i < length; i++)
    {
        temp[length-i-1] = ch[i];
    }
    for (int i = 0; i < length; i++)
    {
        ch[i] = temp[i];
    }
    return ch;
}

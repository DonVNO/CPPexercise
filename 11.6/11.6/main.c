#include <stdio.h>
#include <string.h>
#define LENGTH 256
int is_within(char *, char);
int main(void)
{
    char target[LENGTH];
    char ch;
    printf("Input target:\n");
    fgets(target, LENGTH, stdin);
    printf("Input character:\n");
    scanf("%c",&ch);
    is_within(target, ch) == 1? printf("Yes!\n"):printf("No.\n");
    return 0;
}

int is_within(char * target, char ch)
{
    int j = -1;
    for(int i = 0; i < strlen(target); i++)
    {
        if(ch == target[i])
        {
            j = 1;
            break;
        }
        else
            j = 0;
    }
    return j;
}


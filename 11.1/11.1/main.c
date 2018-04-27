#include <stdio.h>
#include <string.h>
#define SIZE 256
void get(char *, int);
int main(void)
{
    char ch[SIZE];
    int num;
    printf("How many characters?\n");
    scanf("%d",&num);
    while(getchar() != '\n');
    get(ch, num);
    for(int i = 0; i < strlen(ch); i ++)
    {
        printf("ch[%d] = \'%c\'\n", i , ch[i] );
    }
    return 0;
}

void get(char *ar, int n)
{
    printf("Now, input:");
    for(int i = 0; i < n; i++)
        ar[i] = getchar();
    return;
}

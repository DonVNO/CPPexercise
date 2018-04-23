#include<stdio.h>
#define SIZE 5
int max(int ar[], int n);
int main(void)
{
    int radom[SIZE] = {4,9,22,7,8};
    max(radom, SIZE);
    printf("max %d\n",max(radom, SIZE));
    return 0;
}

int max(int ar[], int n)
{
    int max = ar[0];
    int i = 0;
    
    while (i >= 0 && i < n) {
        ar[i] > max? max = ar[i] : max;
        i++;
    }
    return max;
}

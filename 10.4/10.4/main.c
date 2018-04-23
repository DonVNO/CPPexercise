#include<stdio.h>
#define SIZE 5
int max(double ar[], int n);
int main(void)
{
    double radom[SIZE] = {157,191,222,347,756};
    max(radom, SIZE);
    printf("%d\n",max(radom, SIZE));
    return 0;
}

int max(double ar[], int n)
{
    double max = ar[0];
    int i = 0;
    int j = 0;
    
    while (i++ < n) {
        if(ar[i] > max)
        {
            max = ar[i];
            j = i;
        }
    }
    return j;
}

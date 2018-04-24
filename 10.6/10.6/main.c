#include<stdio.h>
#define SIZE 5
void up_side_down(double target[], int n);
int main(void)
{
    double test[SIZE] = {1,3,5,2,9};
    up_side_down(test, SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("test[%d] = %.2lf\n", i, test[i]);
    }
    return 0;
}

void up_side_down(double target[], int n)
{
    double temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = target[n - i - 1];
    }
    for (int i = 0; i < n; i++) {
        target[i] = temp[i];
    }
}

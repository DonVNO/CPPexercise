#include <stdio.h>
#define SIZE 5
double dif(double ar[], int n);
int main(void)
{
    double test[SIZE] = {22.2,78.8,23.3,1.2,99.9};
    printf("The difference between the max and min is %.2lf\n",dif(test, SIZE));
}

double dif(double ar[], int n)
{
    double max = ar[0];
    double min = ar[0];
    for (int i = 0; i < n; i++) {
        if (ar[i] > max) {
            max = ar[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (ar[i] < min) {
            min = ar[i];
        }
    }
    return max-min;
}

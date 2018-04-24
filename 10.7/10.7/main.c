#include<stdio.h>
#define ROWS 3
#define COLS 3
void copy_arr(double ar[], double ap[], int n);
int main(void)
{
    double test[ROWS][COLS] = {{1,2,3},{4,5,6},{7,8,9}};
    double target[ROWS][COLS];
    
    for (int j = 0; j < ROWS; j++) {
        copy_arr(target[j], test[j], COLS);
    }
    
    for (int j = 0; j < ROWS; j++) {
        for (int i = 0; i < COLS; i++) {
            printf("target[%d][%d] = %.2lf\n",j,i,target[j][i]);
        }
        printf("\n");
    }
}

void copy_arr(double ar[], double ap[], int n)
{
    for (int i = 0; i < n; i++) {
        ar[i] = ap[i];
    }
}

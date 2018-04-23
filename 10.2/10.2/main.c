#include<stdio.h>
#define SIZE 5
void copy_arr(double ar[], double ap[], int n);
void copy_ptr(double *ar, double *ap, int n);
void copy_ptrs(double ar[], double ap_b[], double ap_e[]);
int main(void)
{
    double source[SIZE] = {1.1,2.2,3.3,4.4,5.5};
    double target1[SIZE];
    double target2[SIZE];
    double target3[SIZE];
    
    copy_arr(target1, source, SIZE);
    copy_ptr(target2, source, SIZE);
    copy_ptrs(target3,source,source+SIZE);
    
    printf("target1:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("target1[%d] = %.1lf\n", i,target1[i]);
    }
    printf("target2:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("target2[%d] = %.1lf\n", i,target2[i]);
    }
    printf("target3:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("target3[%d] = %.1lf\n", i,target3[i]);
    }
    
    return 0;
}

void copy_arr(double ar[], double ap[], int n)
{
    for (int i = 0; i < n; i++) {
        ar[i] = ap[i];
    }
}

void copy_ptr(double *ar, double *ap, int n)
{
    for (int i = 0; i < n; i++) {
        *(ar + i) = *(ap + i);
    }
}

void copy_ptrs(double ar[], double ap_b[], double ap_e[])
{
    for (double *i = ap_b; i < ap_e; i++) {
        *ar++ = *i;
    }
}

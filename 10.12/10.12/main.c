#include<stdio.h>
#define ROWS 3
#define COLS 3
void copy_arr(int rows, int cols, double ar[rows][cols], double ap[rows][cols]);
int main(void)
{
    double test[ROWS][COLS] = {{1,2,3},{4,5,6},{7,8,9}};
    double target[ROWS][COLS];
    copy_arr(ROWS, COLS, target, test);
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            printf("%8.2f",target[r][c]);
        }
        printf("\n");
    }
}

void copy_arr(int rows, int cols, double ar[rows][cols], double ap[rows][cols])
{
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            ar[r][c] = ap[r][c];
        }
    }
}

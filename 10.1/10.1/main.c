#include<stdio.h>
#define MONTHS 12
#define YEARS 5
void year(float rain[][MONTHS], int year);
void month(float rain[][MONTHS], int year);
int main(void)
{
    float rain[YEARS][MONTHS] = {
        {0,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {0,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {0,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
    };
    printf("year      total\n");
    year(rain,YEARS);
    printf("month average\n");
    month(rain,YEARS);
    return 0;
}

void year(float rain[][MONTHS], int year)
{
    int y;
    int m;
    float tot = 0;
    for(y = 0; y < year; y++)
    {
        for(m = 0; m < MONTHS; m++)
            tot += rain[y][m];
        printf("%4d      %.2f\n",year+2010,tot);
    }
}

void month(float rain[][MONTHS], int year)
{
    int y;
    int m;
    float tot;
    for(m = 0; m < MONTHS; m++)
    {
        tot = 0;
        for(y = 0; y < year; y++)
            tot += rain[y][m];
        printf("%2d      %.2f\n",m+1,tot/12);
    }
}

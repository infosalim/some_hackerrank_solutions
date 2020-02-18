#include<stdio.h>

int main(){
    int n, m;
    float x, y;
    int sum1, diff1;
    float sum2, diff2;

    scanf("%d %d", &n, &m);
    scanf("%f %f", &x, &y);

    sum1 = n + m;
    sum2 = x + y;
    diff1 = n - m;
    diff2 = x - y;

    printf("%d %d \n", sum1, diff1);
    printf("%.1f %.1f \n", sum2, diff2);


    return 0;
}

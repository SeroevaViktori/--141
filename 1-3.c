#include <stdio.h>
#include <math.h>
/**
 * @brief вычисляет значение функции по заданной формуле
 * @param R1 - значение переменной R1
 * @param R2 - значение переменной R2
 * @param R3 - значение переменной R3
 * @return рассчитанное значение
 */
double R(double R1, double R2, double R3);
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double R1, R2, R3;
    printf("R1 = ");
    scanf("%lf", &R1);
    printf("R2 = ");
    scanf("%lf", &R2);
    printf("R3 = ");
    scanf("%lf", &R3);
    printf("R = %lf\n",R(R1,R2,R3));

    return 0;
}
double R(double R1, double R2, double R3)
{
    return R1 + R2 + R3;
}

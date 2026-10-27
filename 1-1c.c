#include <stdio.h>
#include <math.h>
/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @return рассчитанное значение
 */
double A(const double x, const double y, const double z);
/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @return рассчитанное значение
 */
double B(const double x, const double y, const double z);
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const double x = 0.2;
    const double y = 0.004;
    const double z = 1.1; 
    printf("A = %lf\n",A(x,y,z));
    printf("B = %lf",B(x,y,z));

    return 0;
}
double A(const double x, const double y, const double z)
{
    return pow(sin(pow((pow(x,2) + z),2)), 3) - pow((x/y), 0.5);
}
double B(const double x, const double y, const double z)
{
    return pow(x,2)/z + cos(pow((x+y),3));
}

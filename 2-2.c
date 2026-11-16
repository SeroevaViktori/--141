#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>
/**
 * @brief вычисляет значение функции по заданной формуле
 * @return рассчитанное значение
 */

double getDouble();
/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @return рассчитанное значение
 */

double y(const double x);
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */

int main()
{
    printf("Enter x: ");
    double x = getDouble();
    printf("y = %lf\n",y(x));
    return 0;
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
        {
            printf("Error");
            exit(1);
        }
    return value;
}

double y(const double x)
{
    const double a = 0.9;
    if (x>1)
        {
            return a * log10(x) + sqrt(fabs(x));
        }
    else
        {
            return 2 * a * cos(x) + 3 * pow(x,2);
        }
}

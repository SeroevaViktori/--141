#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>
/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @return рассчитанное значение функции
 */
double getY(const double x);
/**
 * @brief проверяет, принадлежит ли значение x области определения функции(ОДЗ)
 * @param x - значение переменной х
 * @return true, если значение принадлежит ОДЗ, иначе false
 */
bool isOOF(const double x);
/**
 * @brief запрашивает у пользователя ввод значения и обрабатывает ошибки ввода
 * @param massage - указатель на строку с приглашением к вводу
 * @return введенное пользователем значение 
 */
double getValue(const char* message);
/**
 * @brief проверяет корректность шага
 * @param step - значение шага
 */
void checkStep(const double step);
/**
 * @brief проверяет корректность заданного отрезка
 * @param xbegin - начало отрезка
 * @param xend - конец отрезка
 */
void checkSegment(const double xbegin,const double xend);
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double xbegin = getValue("Enter segment start: ");
    double xend = getValue("Enter segment end: ");
    double step = getValue("Enter step: ");
    checkStep(step);
    checkSegment(xbegin,xend);
    for (double x = xbegin; x < xend + step / 2.0; x += step)
    {
        if (isOOF(x))
            {
                printf("x = %.2lf, y = %.4lf\n",x, getY(x));
            }
        else
            {
                printf("x = %.2lf, y is not defined\n", x);
            }
    }
    return 0;
}

double getValue(const char* message)
{
    if (message != NULL)
    {
        printf("%s",message);
    }
    double value = 0;
    if (scanf("%lf", &value)!= 1)
    {
        printf("Input error");
        exit(1);
    }
    return value;
}

void checkStep(const double step)
{
    if (step<=0)
    {
        printf("Error, step have to be positive\n");
        exit(1);
    }
}

void checkSegment(const double xbegin,const double xend)
{
    if (xbegin > xend)
    {
        printf("Error, segment begin have to be "
        "less or equal segment end\n");
        exit(1);
    }
}

bool isOOF(const double x)
{
    return x > 0.0;
}

double getY(const double x)
{
    return 0.1 * pow(x,2) - x * log(x);
}

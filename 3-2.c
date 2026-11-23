#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

/**
 * @brief Считывает целое число с клавиатуры.
 * @param message Указатель на строку-приглашение.
 * @return Считанное значение типа int.
 */
int getInt(const char* message);

/**
 * @brief Считывает вещественное число с клавиатуры.
 * @param message Указатель на строку-приглашение.
 * @return Считанное значение типа double.
 */
double getValue(const char* message);

/**
 * @brief Проверяет, что n > 0.
 * @param n Проверяемое значение.
 */
void checkPositive(const int n);

/**
 * @brief Проверяет, что e > 0.
 * @param e Проверяемое значение.
 */
void checkEpsilon(const double e);

/**
 * @brief Вычисляет сумму первых n членов ряда.
 * @param n Количество членов ряда.
 * @return Сумма первых n членов.
 */
double sumN(const int n);

/**
 * @brief Вычисляет сумму членов ряда с заданной точностью.
 * @param e Заданная точность.
 * @return Сумма членов ряда.
 */
double sumE(const double e);

/**
 * @brief Вычисляет коэффициент перехода от i-го члена к (i+1)-му.
 * @param i Индекс текущего члена.
 * @return Коэффициент типа double.
 */
double getCoef(const int i);

/**
 * @brief Точка входа в программу.
 * @return 0 при успешном завершении, 1 при ошибке ввода.
 */
int main()
{
    int n = getInt("Enter n: ");
    checkPositive(n);
    double e = getValue("Enter e: ");
    checkEpsilon(e);
    
    printf("Summ of %d elements is: %lf\n", n, sumN(n));
    printf("Summ of elements less %.0lf is: %lf\n", e, sumE(e));
    return 0;
}

double getValue(const char* message)
{
    if (message != NULL)
    {
        printf("%s\n", message);
    }
    double value = 0;
    if (scanf("%lf", &value) != 1)
    {
        printf("Input error");
        exit(1);
    }
    return value;
}

int getInt(const char* message)
{
    if (message != NULL)
    {
        printf("%s\n", message);
    }
    int value = 0;
    if (scanf("%d", &value) != 1)
    {
        printf("Input error");
        exit(1);
    }
    return value;
}

void checkPositive(const int n)
{
    if (n <= 0)
    {
        printf("Error, n have to be positive\n");
        exit(1);
    }
}

void checkEpsilon(const double e)
{
    if (e <= 0)
    {
        printf("Error, e have to be positive\n");
        exit(1);
    }
}

double sumN(const int n)
{
    double a = 1.0; 
    double result = 0;
    for (int i = 0; i < n; i++)
    {
        result += a;
        a *= getCoef(i);
    }
    return result;
}

double getCoef(const int i)
{
    return -1.0 / ((2.0 * i + 2.0) * (2.0 * i + 3.0));
}
double sumE(const double e)
{
    double a = 1.0;
    double result = 0;
    int i = 0;
    while (fabs(a) >= e - DBL_EPSILON)
    {
        result += a;
        a *= getCoef(i);
        i++;
    }
    return result;
}

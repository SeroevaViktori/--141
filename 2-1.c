#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Вычисляет объем параллелепипеда с заданными параметрами
 * @param length длина параллелепипеда
 * @param width ширина параллелепипеда
 * @param height высота параллелепипеда
 * @return Рассчитанный объем
 */
double v(const double length, const double width, const double height);

/**
 * @brief Вычисляет площадь поверхности параллелепипеда с заданными параметрами
 * @param length длина параллелепипеда
 * @param width ширина параллелепипеда
 * @param height высота параллелепипеда
 * @return Рассчитанная площадь поверхности
 */
double s(const double length, const double width, const double height);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
 double getDouble();

/**
 * @brief Проверяет, что сторона - положительное число
 * @param length длина параллелепипеда
 * @param width ширина параллелепипеда
 * @param height высота параллелепипеда
 */
void checkDimensions(const double length, const double width, const double height);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
 
int main()
{
    printf("Enter length: ");
    double length = getDouble();
    printf("Enter width: ");
    double width = getDouble();
    printf("Enter height: ");
    double height = getDouble();
    checkDimensions(length, width, height);
    printf("V = %.2lf\n",v(length, width, height));
    printf("S = %.2lf\n",s(length, width, height));
    return 0;
}

double v(const double length, const double width, const double height)
{
    return length * width * height;
}

double s(const double length, const double width, const double height)
{
    return 2 * (length * width + width * height + height * length);
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
        {
            printf("Error\n");
            exit(1);
        }
    return value;
}

void checkDimensions(const double length, const double width, const double height)
{
   if (length <= 0 || width <= 0 || height <= 0)
   {
       printf("Error: dimension must be positive\n");
       exit(1);
   }
}

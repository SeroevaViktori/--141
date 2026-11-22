#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Возвращает пожелание в зависимости от времени суток
 * @param hour Время суток в часах
 * @return Указатель на строку с пожеланием
 */
const char* getGreeting(const int hour);

/**
 * @brief Считывает с клавиатуры целое число
 * @return Считанное значение
 */
int getInt();

/**
 * @brief Проверяет, что введенное время находится в допустимом диапазоне
 * @param hour Введенное значение времени
 */
void checkValidHour(const int hour);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main()
{
    printf("Enter hour (0-23): ");
    int hour = getInt();
    checkValidHour(hour);

    printf("%s\n", getGreeting(hour));

    return 0;
}

const char* getGreeting(const int hour)
{
    if (hour >= 5 && hour < 12)
    {
        return "Good morning";
    }
    else if (hour >= 12 && hour < 17)
    {
        return "Good afternoon";
    }
    else if (hour >= 17 && hour < 22)
    {
        return "Good evening";
    }
    else
    {
        return "Good night";
    }
}

int getInt()
{
    int value = 0;
    if (scanf("%d", &value) != 1)
    {
        printf("Error: invalid input\n");
        exit(1);
    }
    return value;
}


void checkValidHour(const int hour)
{
    if (hour < 0 || hour > 23)
    {
        printf("Error: hour must be between 0 and 23\n");
        exit(1);
    }
}

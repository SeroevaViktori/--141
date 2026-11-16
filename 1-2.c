#include <stdio.h>
#include <stdlib.h>

/**
* @brief считывает введённое значение и проверяет его на корректность
* @return считанное значение
*/
double GetValue();

/**
* @brief проверяет, что значение больше 0
* @param value - проверяемое значение
*/
void CheckValue(const double value);

/**
* @brief переводит байты в мегабайты
* @param bytes - объем информации в байтах
* @param bytesInKb - количество байт в килобайте
* @return объем информации в мегабайтах
*/
double ConvertToMegabytes(const double bytes, const double bytesInKb);

/**
* @brief переводит байты в гигабайты
* @param bytes - объем информации в байтах
* @param bytesInKb - количество байт в килобайте
* @return объем информации в гигабайтах
*/
double ConvertToGigabytes(const double bytes, const double bytesInKb);

/**
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/
int main()
{
 const double BYTES_IN_KB = 1024.0
 printf("Enter volume of information in bytes:\n");
 double bytes = GetValue();
 CheckValue(bytes);
 printf("\nResults\n");
 printf("Volume in Megabytes: %.4lf MB\n", ConvertToMegabytes(bytes, BYTES_IN_KB));
 printf("Volume in Gigabytes: %.6lf GB\n", ConvertToGigabytes(bytes, BYTES_IN_KB));
 return 0;
}

double GetValue()
{
 double value = 0.0;
 if (scanf("%lf", &value) != 1)
 {
  printf("Error: incorrect type\n");
  exit(1);
 }
 return value;
}

void CheckValue(const double value)
{
 if (value <= 0)
 {
  printf("Error: value need be positive or not be 0\n");
  exit(1);
 }
}

double ConvertToMegabytes(const double bytes, const double bytesInKb)
{
 return bytes / (bytesInKb * bytesInKb);
}

double ConvertToGigabytes(const double bytes, const double bytesInKb)
{
 return bytes / (bytesInKb * bytesInKb * bytesInKb);
}

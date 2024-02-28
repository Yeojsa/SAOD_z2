// Выполнил Богодухов А.А., вариант 2
#include <iostream>
#include <fstream>

using namespace std;

/// открытие файла
/// filename - имя файла, возвращает поток для чтения из файла
ifstream openfile(const string& filename);

/// вычисление среднего значения
/// file - поток для чтения из файла, возвращает среднее значение чисел
double average(ifstream& file);

/// запись в файл
/// filename - имя файла для записи, average - среднее значение для записи
void writeToFile(const string& filename, double average);

/// проверка данных
void test();
// �������� ��������� �.�., ������� 2
#include <iostream>
#include <fstream>

using namespace std;

/// �������� �����
/// filename - ��� �����, ���������� ����� ��� ������ �� �����
ifstream openfile(const string& filename);

/// ���������� �������� ��������
/// file - ����� ��� ������ �� �����, ���������� ������� �������� �����
double average(ifstream& file);

/// ������ � ����
/// filename - ��� ����� ��� ������, average - ������� �������� ��� ������
void writeToFile(const string& filename, double average);

/// �������� ������
void test();
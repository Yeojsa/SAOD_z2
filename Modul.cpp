// �������� ��������� �.�., ������� 2
#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

/* 
�������� ������ ����� �� ����� test.txt
��������� �� ������� ��������  
���������� ��������� � ���� result.txt
�� ���� �������� �����-����� � �������������� ��������
����� ���������� ��������:
�������� ����� ��� ������ - 1
�������� ����� ��� ������ - 1
�������� ������ � ���� - 1
�������� ����� - 2
������ �� ����� - n, ��� ��� ������� �� ���������� �������� � �����
���������� ����� � ����� - n
���������� �������� ����� - n
*/


/// �������� ����� ��� ������
/// filename - ��� �����, ���������� ����� ��� ������ �� �����
ifstream openfile(const string& filename) {
    ifstream file(filename); // �������� ����� ��� ������
    if (!file.is_open()) { // �������� �������� �� ����
        cerr << "������ ��� �������� �����" << endl;
        exit(0); // ���������� ���������
    }
    return file;
}


/// ���������� �������� �������� �� ����� � �����
/// file - ����� ��� ������ �� �����, ���������� ������� �������� �����
double average(ifstream& file) {
    double sum = 0.0; // ����� �����
    int count = 0; // ���������� �����
    double n; // ����� �� �����

    // ������ ����� �� ����� 
    while (file >> n || !file.eof()) {
        if (file.fail()) { // �������� ������ ��� ������ �� �����
            file.clear();  // ����� ����� ������
            string m; 
            file >> m; //���������� ������ �� ����� ��� ���������� ������
            continue; // ����������� �����
        }

        sum += n; // ���������� ����� � �����
        count++; // ���������� �������� �����
    }

    // �������� ���� �� ����
    if (count == 0) {
        cerr << "���� ����" << endl;
        return 0.0;
    }

    //���������� �������� ��������
    return sum / count;
}

/// ������ � ����
/// filename - ��� ����� ��� ������, average - ������� �������� ��� ������
void writeToFile(const string& filename, double average) {
    ofstream output(filename); // ������ � ����
    output << "������� �������� ����� � �����: " << average << endl;
    output.close(); // �������� �����
}

/// �������� ������
void test() {
    ifstream file = openfile("testassert.txt");
    assert(file.is_open()); // �������� �������� �� ����
    assert(70 == average(file)); // �������� ���������� �������� ��������
    file.close();
}
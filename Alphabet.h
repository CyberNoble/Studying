//Alphabet.h
#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

string Alphabet() {  // ������� ��������� �������� � ����� � ������ �� ������,���������� ��������
    string alphabet;
    cout << "������� ����� ������ ��������: " << endl;  cin >> alphabet;
    system("cls");
    cout << "��� �������: ";
    for (int i = 0; i < alphabet.length(); i++)
    {
        if (i != alphabet.length() - 1)
            cout << alphabet[i] << ",";
        else
            cout << alphabet[i] << endl;
    }

    return alphabet;
}
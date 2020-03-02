#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;

void Slovar(int i1,int i2,int i3,string* slovo1, string* slovo2, string* slovo3)
{
    string path = "TerInfa_Slovar.txt";
    ofstream ofs ("TerInfa_Slovar.txt");
    fstream fs;
    fs.open(path, fstream::in | fstream::out);
    if (!fs.is_open())
    {
        cout << "Ошибка открытия" << endl;
    }
    else
    {
        cout << "Slovar.h Complete" << endl;
        fs << "Словарь для первого слова: \n \n";
        for (int i = 0; i < i1; i++)
        {
            fs << slovo1[i] << endl;
        }
        fs << "Словарь для второго слова: \n \n";
        for (int i = 0; i < i2; i++)
        {
            fs << slovo2[i] << endl;
        }
        fs << "Словарь для третьего слова: \n \n";
        for (int i = 0; i < i3; i++)
        {
            fs << slovo3[i] << endl;
        }
    }
    fs.close();
	
	
	return;
}
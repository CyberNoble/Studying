//Alphabet.h
#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

string Alphabet() {  // функция получения алфавита с клавы и вывода на экрана,введенного алфавита
    string alphabet;
    cout << "Введите буквы вашего алфавита: " << endl;  cin >> alphabet;
    system("cls");
    cout << "Ваш алфавит: ";
    for (int i = 0; i < alphabet.length(); i++)
    {
        if (i != alphabet.length() - 1)
            cout << alphabet[i] << ",";
        else
            cout << alphabet[i] << endl;
    }

    return alphabet;
}
#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;



void ZipText(int imin, string* slovo1, string* slovo2, string* slovo3)
{
    string path = "TerInfa_ZipText.txt";
    ofstream ofs("TerInfa_ZipText.txt");
    fstream fs;
    
    int j = 1;
    fs.open(path, fstream::in | fstream::out);
    if (!fs.is_open())
    {
        cout << "Ошибка открытия" << endl;
    }
    else
    {
        cout << "ZipText.h Complete" << endl;
        for (int i = 0; i < imin; i++)
        {          
            
            string sentence;
            sentence = slovo1[i] + " " + slovo2[i] + " " + slovo3[i];
            fs << j++;
            fs << " sentence: ";
            fs << sentence << "\n";
            
        }

    }
    fs.close();

    return;
}
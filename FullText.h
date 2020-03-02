//FullText.h
#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;

void FullText(int imin,string *slovo1, string* slovo2, string* slovo3)
{
    string path = "TerInfa_Fulltext.txt";
    ofstream ofs("TerInfa_Fulltext.txt");
    fstream fs;
    fs.open(path, fstream::in | fstream::out);
    if (!fs.is_open())
    {
        cout << "Ошибка открытия" << endl;
    }
    else
    {
        cout << "FullText.h Complete" << endl;
        for (int i = 0; i < imin; i++)
        {
   
            string sentence;

            sentence = slovo1[i] + " " + slovo2[i] + " " + slovo3[i];
            fs << sentence << endl;
            
            
        }

    }
    fs.close();
    return;
}
//main.cpp
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <string>
#include "Alphabet.h"
#include <fstream>
#include <algorithm>
#include "FullText.h"
#include "Slovar.h"
#include "ZipText.h"
#define size 75
using namespace std;

int main(int argc, char* argv[])
{
    system("chcp 1251>>NULL");
    setlocale(0, "RU");
    srand(time(NULL));
    int i1 = 0, i2 = 0, i3 = 0, i4 = 0;

    string alphabet = Alphabet(); //переменная ,которая получает результат функции алфавита
    string *slovo1 = new string[size], *slovo2 = new string[size], *slovo3 = new string[size];  //массивы рандомных слов
    string *slovo1ZIP = new string[size], *slovo2ZIP = new string[size], *slovo3ZIP = new string[size];

    int wordsCount = rand() % 50 + 25; //кол-во слов
    for (int i = 0; i < wordsCount; i++)  //цикл задачи рандом слов из рандом букв и распределения рандомно слов по 4 массивам
    {

        int wordLength = 5 + rand() % 10;  // Случайная длина слова
        string word;  //если не будешь переписывать цикл,то она должна остаться на этом месте,чтобы обновлять переменную и в ней не копился мусор


        for (int j = 0; j < wordLength; j++)  //цикл получения рандом слова из алфавита
        {
            word += alphabet[rand() % alphabet.length()];  //готовые слова
        }
        // cout << word<<endl;

        int randomCategory = rand() % 3 + 1;// рандом переменная для свитча

        switch (randomCategory) //рандом распределение по массивам
        {
        case 1:
            slovo1[i1++] = word;
            
            break;
        case 2:
            slovo2[i2++] = word;
            
            break;
        case 3:
            slovo3[i3++] = word;
           
            break;
        default:
            cout << "error";
            break;
        }

        string wordTMP = word;
        
        string wordZIP;

        auto wordBegin = wordTMP.begin();
        while (wordBegin != wordTMP.end())
        {
            auto curr_end = find_if(wordBegin, wordTMP.end(), [&wordBegin](const auto& c) {return c != *wordBegin; });
            const auto count = curr_end - wordBegin;
            wordZIP += "{";
            wordZIP += to_string(count);
            wordZIP += ",";
            wordZIP += *wordBegin;
            wordZIP += "}";
            wordBegin = curr_end;
        }
        //cout << result;

        switch (randomCategory) //рандом распределение по массивам
        {
        case 1:
            slovo1ZIP[i1++] = wordZIP;

            break;
        case 2:
            slovo2ZIP[i2++] = wordZIP;

            break;
        case 3:
            slovo3ZIP[i3++] = wordZIP;

            break;
        default:
            cout << "error";
            break;
        }
    }
    
        int imin;
        if (i1 < i2)
            imin = i1;
        else imin = i2;

        if (imin > i3)
            imin = i3;
    
    
         FullText(imin, slovo1, slovo2, slovo3);
         /*for (int i = 0; i < imin; i++)
             cout << slovo1ZIP[i]<<endl;*/
         Slovar(i1, i2, i3, slovo1, slovo2, slovo3);
         ZipText(imin, slovo1ZIP, slovo2ZIP, slovo3ZIP);
    
    
        delete[] slovo1;
        delete[] slovo2;
        delete[] slovo3;
        delete[] slovo1ZIP;
        delete[] slovo2ZIP;
        delete[] slovo3ZIP;
    
    return 0;
}
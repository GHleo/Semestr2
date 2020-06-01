#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "planets.h"


    string line;
    void Planets::readFile(string path)
    {

        ifstream in(path); // окрываем файл для чтения
        cout << path << endl;
        if (in.is_open())
        {
            while (getline(in, line))
            {
                cout << line << endl;
            }
        }
        in.close();     // закрываем файл
    }


#include "planets.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void  Planets::readFile(string path)//метод объявляется в заголовочном файле
    {
        arr_size =  10;
        ifstream file_in; // окрываем файл для чтения
        file_in.open(path);
        if (file_in.is_open())
        {
            for (int i = 0; i < arr_size; i++)
            {
                file_in >> arr[i];// из потока записываем в массив
            }
        }
        file_in.close();     // закрываем файл
        //выводим на консоль из массива
        for (int i = 0; i < arr_size; i++)
        {
            cout << arr[i] << endl;
        }
    }


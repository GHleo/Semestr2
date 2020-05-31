//
// Created by iLeoMac on 2020-05-31.
//

#include "planets.h"
class planet
{
public:
    std::string line;

    void readFile(String path) {
        std::ifstream in("D:\\hello.txt"); // окрываем файл для чтения
        if (in.is_open())
        {
            while (getline(in, line))
            {
                std::cout << line << std::endl;
            }
        }
        in.close();     // закрываем файл
    }


};
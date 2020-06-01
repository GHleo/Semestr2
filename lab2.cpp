#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class planet
{
public:

    float plot, sput;

    void read1(string path)  //чтения файла
    {
        ifstream A;
        A.open(path);
        const int len = 30, strings = 5;      //параметры массива
        const char ch = '\n';
        char mass[len][strings];
        for (int r = 0; r < strings; r++)
        {
            A.getline(mass[r], len - 1, ch); //Считываем строки в массив
            cout << "String " << r + 1 << " = " << mass[r] << endl; //Выводи строку из массива
        }

    }

    /* void write1(string path)
     {
         ofstream planets;
         planets.open(path,ofstream::app);
         planets.write((char*)& planets1, sizeof(planet));//запись в файл

     }

     */
    void print()
    {
        cout <<  plot << sput << endl;
    }




};

int main()
{
    planet planets1;
    string txt;
    txt = "C:/Users/den/source/repos/LAB1/planet.txt";
    planets1.read1(txt);

    /*while (true)
    {
        switch (a)
        {
        case 1:
        }

    }
    */




    return 0;
}


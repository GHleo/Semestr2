#include "planets.h"
#include "planets.cpp"
//#include "ConsolCyr.h"
using namespace std;

//int read_db(char*, Planet*, const int);
int  menu();
//void print_db(Planet*, int);
//int write_db(char*,Planet*, int);
//int find(Planet*,int);
//void sort_db(Planet*, int);
//const int Size = 12;
//const int l_record = 80;

int main()
{
    string file_name = "/home/uleo/CLionProjects/Semestr2/plantes.txt";
    int n_planet;
    int ind;
    Planets p;
    p.readFile(file_name);
/*
    while (true) {
        switch (menu())
        {

            case 1: n_planet=read_db(file_name,planets,Size);
                break;
           case 2: write_db(file_name,planets,n_planet); break;
            case 3: if((ind=find(planets,n_planet))>=0)
                    planets[ind].edit();
                else
                    cout<<"Такой планеты нет"<<endl;
                break;
            case 4: print_db(planets,n_planet); break;
            case 5: sort_db(planets,n_planet); break;
            case 6: return 0;
            default: cout<<" Неправильный ввод"<<endl; break;
        }
    }
    */
    return 0;
}
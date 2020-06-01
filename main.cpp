#include "planets.h"
//#include "planets.cpp"
#include "menu.h"
//#include "menu.cpp"
#include <iostream>

//#include "ConsolCyr.h"
using namespace std;

//int read_db(char*, Planet*, const int);
//void print_db(Planet*, int);
//int write_db(char*,Planet*, int);
//int find(Planet*,int);
//void sort_db(Planet*, int);
//const int Size = 12;
//const int l_record = 80;

int main()
{
      Menu m; //Создаем объект класса Menu
      //m.PrintMenu();
    //string file_name = "/home/uleo/CLionProjects/Semestr2/plantes.txt";
    Planets p;
    p.opFile();

    int choice = 0;
    do
    {
        //system("cls");
        m.DisplayMainMenu();
        choice = m.GetInput();
        switch(choice) {
            case 1:
                cout << "Pew pew!\n";
                break;
            case 2:
                m.Options();
                break;
            case 3:
                cout << "Exit!";
                break;

            default:
                break;
        }
    } while(choice!=3);

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


       // return EXIT_SUCCESS;

    return 0;
}
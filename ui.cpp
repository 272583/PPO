#include <iostream>
#include "functions.h"
using namespace std;

void ui(){
    cout << "Co chcesz zrobic?" << endl;
    cout << "1. Dodaj studenta " << endl;
    cout << "2. Wyswietl studentow" << endl;
    int wybor;
    cin >> wybor;
    switch(wybor){
        case 1: 
            cout << "Podaj index: " << endl;
            cin >> index;
            dodajStudenta(tablicaStudentow, index);
            cout << "Dodano!" << endl;
            break;
        case 2: 
            int i=0;
            while(tabstudent[i]!=0){
                cout << tabstudent[i] << endl;
                i++;
            }
            break;
        default: break;
    }
}

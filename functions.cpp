#include <iostream>
using namespace std;

int dodajStudenta(int tabstudent[100], int index){
    for(int i=0; i<100; i++){
        if(tabstudent[i] == 0){
            tabstudent[i] = index;
        }
    }
}

void drukujListe(int tabstudent[100]){
    for(int i=0; i<100; i++){
        if(tabstudent[i] != 0){
        cout << tabstudent[i] << endl;
        }
    }
}
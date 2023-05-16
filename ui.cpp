#include <iostream>
#include "functions.h"
#include "objects.h"

void ui(){
    std::cout << "Co chcesz zrobic?" << std::endl;
    std::cout << "1. Dodaj studenta " << std::endl;
    std::cout << "2. Wyswietl studentow" << std::endl;
    int wybor;
    std::cin >> wybor;
    switch(wybor){
        case 1: 
            std::cout << "1. Dodaj pracownik" << std::endl;
            std::cout << "2. Dodaj studenta" << std::endl;
            std::cout << "Podaj index: " << std::endl;
            std::cout << "Dodano!" << std::endl;
            break;
        case 2: 

            printTypeList();
            break;
        default: 
        break;
    }
}

#include <iostream>
#include <vector>
#include "ui.h"
#include "objects.h"


std::vector<osoba> Osoby;
int main(){
    ui();
    return 0;
}


        //gets the pesel from the class
        /**
          * This is a method that checks if the pesel is valid.
          * If the pesel is valid it overwrites the current one in the class.
          * @param _pesel
          * @return 0 for valid, 1 for too short, 2 for too long
        **/
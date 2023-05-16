#include <iostream>
#include <string>
#include <vector>
#include "objects.h"


int addperson(std::vector<person*> *People, person* person){
    *People.pushback(person);
}

std::string printTypeList(std::vector<person*> People){
    for (int i = 0; i < People.size(); i++) {
        printPersonType(*People[i]);
    }
}

void printPersonType(Identifiable *obj){
     std::cout << obj->getType() << " ";
}
#include <iostream>
#include <vector>
#include "ui.h"
#include "objects.h"

class lista{
  std::vector<person*> People;
  employee* p1 = new employee(1, "John", "Doe", "12345678901");
  student* s1 = new student(100, "Jane", "Smith", "98765432109");
};

int main(){
    ui();
    return 0;
}


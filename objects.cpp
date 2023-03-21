#include <string>
using namespace std;

class student{
    private:
        int index;
        string Name;
        string Surname;
        string pesel;
    public:
        string getName(){
            return Name;
        }
        void setName(string _Name){
            Name = _Name;
        }

        int getIndex(){
            return index;
        }
        int setIndex(int _index){
            index = _index;
            return 0;
        }


        string getSurname(){
            return Surname;
        }
        int setSurname( string _Surname){
            Surname = _Surname;
            return 0;
        }

        //gets the pesel from the class
        string getPesel(){
            return pesel;
        }
        /**
          * This is a method that checks if the pesel is valid.
          * If the pesel is valid it overwrites the current one in the class.
          * @param _pesel
          * @return 0 for valid, 1 for too short, 2 for too long
        **/
        int setPesel(string _pesel){
            if(pesel.length() == 11){
                pesel = _pesel;
                return 0;
            }
            else{
                if(pesel.length()>11){
                    return 2;
                }else{
                    return 1
                }
            }
        }

        int getWiek()
}


/*
Class Students contains:
- table of students (private)
and methods:
public:
- getStudent(int i) - method for selecting a student  **listStudents will use this method**
- addStudent - method for adding another student to the table(?)
    error communications:
     1 - referencing to an area out of bound
     2 - 

- getSumStudent - method for getting the number of all the students
- Student(string pesel) - method for getting a student by their pesel
- Student(int index) - method for getting a student by their index

*/
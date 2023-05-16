#include <iostream>
#include <string>
#include <vector>

class Identifiable {
public:
    virtual int getId() = 0;
    virtual std::string getType() = 0;
};

class person{
    private:
        std::string Name;
        std::string Surname;
        std::string Pesel;
    public:
        person(std::string _Name, std::string _Surname, std::string _Pesel){
            Name = _Name;
            Surname = _Surname;
            Pesel = _Pesel;
        }
        std::string getName(){
            return Name;
        }
        void setName(std::string _Name){
            Name = _Name;
        }

        std::string getSurname(){
            return Surname;
        }
        void setSurname(std::string _Surname){
            Surname = _Surname;
        }

        void setPesel(std::string _pesel){
            if(_pesel.length() == 11){
                Pesel = _pesel;
            }
            else{
                if(_pesel.length() > 11){
                    std::cout << "Error: Pesel length exceeds 11 characters." << std::endl;
                } else {
                    std::cout << "Error: Pesel length is less than 11 characters." << std::endl;
                }
            }
        }    
};

class student : public person, public Identifiable{
    private:
        int index;
    public:
        student(int _index, std::string _Name, std::string _Surname, std::string _Pesel) : person(_Name, _Surname, _Pesel){
            index = _index;
        }

        int getIndex(){
            return index;
        }
        void setIndex(int _index){
            index = _index;
        }

        std::string getType() {
        return "Student";
        }

        int getId() {
            return index;
        }
};

class employee : public person, public Identifiable{
    private:
        int cnumber;
    public:
        employee(int _cnumber, std::string _Name, std::string _Surname, std::string _Pesel) : person(_Name, _Surname, _Pesel){
            cnumber = _cnumber;
        }

        int getIndex(){
            return cnumber;
        }
        void setIndex(int _cnumber){
            cnumber = _cnumber;
        }

        std::string getType() {
            return "Employee";
        }

        int getId() {
            return cnumber;
        }
};



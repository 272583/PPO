#include <iostream>
#include <string>
#include <vector>



class osoba{
    private:
        std::string Name;
        std::string Surname;
        std::string Pesel;
    public:
        osoba(std::string _Name, std::string _Surname, std::string _Pesel){
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
        virtual std::string getType() = 0;
        virtual std::string getId() = 0;        
};

class student : public osoba{
    private:
        int index;
    public:
        student(int _index, std::string _Name, std::string _Surname, std::string _Pesel) : osoba(_Name, _Surname, _Pesel){
            index = _index;
        }

        int getIndex(){
            return index;
        }
        void setIndex(int _index){
            index = _index;
        }
};

class pracownik : public osoba{
    private:
        int index;
    public:
        pracownik(int _index, std::string _Name, std::string _Surname, std::string _Pesel) : osoba(_Name, _Surname, _Pesel){
            index = _index;
        }

        int getIndex(){
            return index;
        }
        void setIndex(int _index){
            index = _index;
        }
};



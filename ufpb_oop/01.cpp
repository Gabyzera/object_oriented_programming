#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class People{
protected:
    int age;
    
public:
    void print_info(){
        cout << "\nIdade: " << age << endl;
    }
    int get_age(){
      return age;
    }
    void set_age(int age){
      this -> age = age;
    }
}; 

class Teacher : public People{
    int siape;

public:
    int get_siape(){
      return siape;
    }
    void set_siape(int i){
      siape = i;
    }
    void print_info(){
        People::print_info(); 
        cout << "Siape: " << siape << endl;
    }
};

class Visiting_teacher : public Teacher {
    int code;

public:
    int get_code(){
      return code;
    }
    void set_code(int i){
      code = i;
    }
    void print_info(){
        Teacher::print_info();
        cout << "Codigo: " << code << endl; 
    }
}; 

int main(){
    People p1;
    Teacher t1;
    Visiting_teacher vt1;

    p1.set_age(20);
    p1.print_info();

    t1.set_age(32);
    t1.set_siape(28910);
    t1.print_info();

    vt1.set_age(42);
    vt1.set_siape(12345);
    vt1.set_code(11);
    vt1.print_info();

    return 0;
}

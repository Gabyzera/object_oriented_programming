#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Employee{
private:
  string Company;
  int Age;

protected:
  string Name;

public:
  void setName(string name){Name = name;}
  string getName(){return Name;}

  void setCompany(string company){Company = company;}
  string getCompany(){return Company;}

  void setAge(int age){
      if (Age >= 18)
      Age = age; 
  }
  int getAge(){return Age;}

  void introduce_yourself(){
    cout<<"Write your name:" << Name << endl;
    cout<<"Write the company you work:" << Company << endl;
    cout<<"Write your age:" << Age << endl;
  }
  Employee(string name, string company, int age){
    Name = name;
    Company = company;
    Age = age;
  }
  virtual void AskForPromotion(){
    if (Age>30)
      cout << Name << ", got promoted!" << endl;
    else 
      cout << Name << ", sorry, NO promotion for you!" << endl;
  }
  virtual void Work(){
    cout << Name << " is check email, task backlog, performing tasks..." << endl;
  }
};

class Developer : public Employee{
public:
  string FavProgrammingLanguage;
  Developer(string name, string company, int age, string favProgrammingLanguage)
    :Employee(name, company, age){
      FavProgrammingLanguage = favProgrammingLanguage;
    };
  void FixBug(){
    cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
  }
  void Work(){
    cout << Name << " is writing " << FavProgrammingLanguage << " code"  << endl;
  }
};

class Teacher : public Employee{
public:
  string Subject;
  void PreapareLesson(){
    cout << Name << " is preparing " << Subject << " lesson." << endl;
  }
  Teacher(string name, string company, int age,string subject)
    :Employee(name,company,age){
      Subject = subject;
    }
  void Work(){
    cout << Name << " is teaching " << Subject << endl;
  }
};

int main(){ 
  /*add information in name, company, age and favProgrammingLanguage of employees
  Employee employee1 = Employee("Gabrielly", "FUNETEC", 20, python);
  Employee employee2 = Employee("Joana", "FUNETEC", 32, javascript);
  
  test the apresentation of the employees
  employee1.introduce_yourself();
  employee2.introduce_yourself();

  test the change the Age of the employee
  employee1.setAge(100);
  cout << employee1.getName() << " have " << employee1.getAge() << " years old." << endl;
  
  yes or no presentation for employees promotion
  employee1.AskForPromotion();
  employee2.AskForPromotion();

  apresentation the message of FixBug of developer and AskForPromotion of 
  developer and teacher
  d.FixBug();
  d.AskForPromotion();
  t.AskForPromotion();

  apresentation of message of PrepareLesson teacher and Work of teacher 
  and developer
  t.PreapareLesson();
  d.Work();
  t.Work();*/

  Developer d = Developer("Gabrielly", "FUNETEC", 20, "python");
  Teacher t = Teacher("Liana", "MIT", 32, "History"); 

  Employee *e1 = &d;
  Employee *e2 = &t;

  e1-> Work();
  e2-> Work();
}
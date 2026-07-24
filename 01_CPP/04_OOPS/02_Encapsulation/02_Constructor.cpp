#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    float Salary;
    float Bonus;

public:
    string Name;
    string EmpID;
    string Dept;
    int Phone;

    //Non Parameterized Constructor
    Employee(){
        cout << "Constructor called" << endl;
        Dept = "IT";
    }

    //parametrized constructor
    Employee(string name, string empid, string Dept, int Phone){
        Name = name;
        EmpID = empid;
        this->Dept = Dept; //this pointer 
        this->Phone = Phone;
    }

    //copy constructor
    Employee(const Employee &obj){
        this->Name = obj.Name;
        this->EmpID = obj.EmpID;
        this->Dept = obj.Dept;
        this->Phone = obj.Phone;
    }
};

int main() {
    Employee e1; //Constructor called 
    e1.Name = "Vijay";
    e1.EmpID = "E12345";
    cout << e1.Dept << endl; //prints 'IT' as constructor is called and Dept is initialized to 'IT'

    //--------------------------------------------------
    Employee e2("Nitin", "E1234", "HR", 1234567890); //Parameterized constructor called
    cout << e2.Dept << endl; //prints 'HR' as parameterized constructor is called and Dept is initialized to 'HR'

    //--------------------------------------------------
    Employee e3(e2); //Copy constructor called
    cout << e3.Dept << endl; //prints 'HR' as copy constructor is called and Dept is initialized to 'HR'
    return 0;
}
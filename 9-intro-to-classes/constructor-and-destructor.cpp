#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;
    Employee();
    Employee(int salary);
    void sign_in();
    void sign_out();
    ~Employee();
};

Employee::Employee()
{
    salary = 10000;
}

Employee::Employee(int salary)
{
    this->salary = salary;
}

Employee::~Employee()
{
    cout << "Instance has been removed" << endl;
}

void Employee::sign_in()
{
    cout << "signing in: " << endl;
}

void Employee::sign_out()
{
    cout << "signing out: " << endl;
}

int main()
{
    // Employee emp;
    // emp.name = "mansoor";
    // emp.sign_in();
    // emp.sign_out();

    Employee *e;
    e = new Employee;
    cout << e->salary << endl;
    e->sign_in();
    e->sign_out();

    delete e;
    e = new Employee(70000);
    cout << e->salary << endl;
    e->sign_in();
    e->sign_out();
    delete e;
    e = NULL; // fix the dangling pointer
    return 0;
}
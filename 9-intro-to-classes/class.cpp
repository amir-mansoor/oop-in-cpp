#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    void sign_in();
    void sign_out();
};

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
    Employee emp;
    emp.name = "mansoor";
    emp.sign_in();
    emp.sign_out();

    Employee *e;
    e = new Employee;
    e->name = "sunny";
    cout << e->name << endl;
    e->sign_in();
    e->sign_out();
    return 0;
}
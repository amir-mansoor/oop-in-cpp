#include <iostream>
using namespace std;

class Employee {
    public:
    string name;
    string cnic;

    void sign_in();
    void promote();
};

void Employee::sign_in() {
    cout << "Signing in..." << endl;
}

void Employee::promote() {
    cout << "Promoted to ..." << endl;
}

void class_pointer() {
    Employee *e;
    e = new Employee; // This will return address
    e->name = "Amir Mansoor";
    cout << e << endl;   
    cout << e->name << endl;
    e->sign_in();
}

int main() {
    Employee e1;
    e1.name = "Mansoor";
    e1.cnic = "4391-3282-4713";
    e1.sign_in();
    e1.promote();
    // class pointer
    class_pointer();
    Employee *e;
    e = &e1;
    return 0;
}
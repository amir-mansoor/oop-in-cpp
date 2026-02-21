#include <iostream>
using namespace std;

struct student {
    string name;
    int rollno;
};


void create_new_instance() {
    student *s;
    // cout << new student << endl; // it returns an address
    s = new student;
    s->name = "amir";
    s->rollno = 234;

    // delete an existing instance;
    delete s;
}

int main() {
    student s1;
    s1.name = "Mansoor";
    s1.rollno = 31233;
    student *s;
    s = &s1;
    // cout << (*s).name << endl;
    cout << s->name << endl; // s->name = (*s1).name

    create_new_instance();
    return 0;
}
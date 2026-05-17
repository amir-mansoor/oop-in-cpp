#include <iostream>
using namespace std;

struct Student {
    int rollno;
    string name;
};

int main() {
    Student s1;
    s1.name = "Amir Mansoor";
    s1.rollno = 20;
    cout << s1.name << " " << s1.rollno << endl; 
    Student *s;
    s = &s1; // one way to get address
    cout << (*s).name << endl;
    cout << s->name << endl;   

    // new instance
    s = new Student;
    s->name = "Sannan";
    s->rollno = 10;
    cout << s->name << " " << s->rollno << endl;

    // delete instance / opposite of new 
    delete s;

    return 0;	
}

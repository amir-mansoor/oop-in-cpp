#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollno;
};

void array_test() {
    int a[5];
    
    cout << "Before assignment\n";
    for(int i = 0; i < 5;i++) {
        cout << a[i] << " "; // Notice the garbase values
    }

    for(int i = 0; i < 5;i++) {
        a[i] = 0;
    }
    
    cout << "\n";
    a[0] = 24;
    cout << "After assignment\n";
    for(int i = 0; i < 5;i++) {
        cout << a[i] << " "; 
    }

    cout << "\n";
}

void array_test2d() {
    int a[2][3];
    cout << "Before assignment\n";
    for(int i = 0; i < 2;i++) {
        for(int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    
    for(int i = 0; i < 2;i++) {
        for(int j = 0; j < 3; j++) {
            a[i][j] = i*j;
        }
    }

    cout << "After assignment\n";
    for(int i = 0; i < 2;i++) {
        for(int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

void string_test() {
    char a[] = "Hello";
    cout << a << endl;

    // it is a null terminator
    cout << "a[5] " << a[5] << endl;

    if(a[5] == '\0') {
        cout << "a[5] is a null terminator\n";
    }

    string name = "mansoor";
    cout << name << endl;
    cout << name[0] << endl;
    cout << "Is name empty " << name.empty() << endl;
}

int main() {
    char a[] = "hello";
    cout << a << endl;

    string b = "Helloworld";
    cout << b << endl;
    cout << b.size() << endl;
    cout << b.empty() << endl;

    // array_test();
    // array_test2d();
    string_test();

    Student s1;
    s1.name = "mansoor";
    s1.rollno = 1;
    cout << s1.name << " " << s1.rollno << "\n";

    Student s2;
    s2.name = "sunny";
    s2.rollno = 2;

    cout << s2.name << " " << s2.rollno << "\n";

    Student students[5];
    students[0].name = "mansoor";
    cout << "Student[0]: " << students[0].name << endl;

    return 0;
}

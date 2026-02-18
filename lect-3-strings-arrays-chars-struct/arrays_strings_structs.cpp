#include <iostream>
using namespace std;

struct student {
    string name;
    int rollno;
};

void array_test() {
    int a[3] = {1,2,3};

    for(int i = 0; i < 3;i++) {
        cout << a[i] << endl;
    }
}

void array_2d() {
    int a[2][3];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            a[i][j] = i*j;

            cout << a[i][j] << " ";
        }
        cout << endl;
        
    }
}

void character_array() {
    char a[] = "Hello"; // at the last it will have a null terminator
    for(int i = 0; i < 6; i++) {
        cout << a[i];
    }

    cout << endl;
    cout << a << endl; // if we give a array of a string to cout it automatically make a loop on it until it sees a null terminator

    string b = "hello"; // now these both are equivelant
    
    cout << b.length() << endl;
    cout << b.empty() << endl;
}

void struct_test() {
    student s1;
    s1.name = "Mansoor";
    s1.rollno = 3231;
    cout << s1.name << endl;

    student s2;
    s2.name = "Amir";
    cout << s2.name << " " << s2.rollno << endl;
}

void array_of_struct() {
    student s[5]; // an array of students
    s[0].name = "First student";
    s[0].rollno = 3413;
}

int main() {

    // array_test();
    // array_2d();
    // character_array();
    // struct_test();
    array_of_struct();
    return 0;
} 
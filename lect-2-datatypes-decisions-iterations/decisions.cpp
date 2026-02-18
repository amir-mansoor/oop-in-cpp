#include <iostream>
using namespace std;

void if_test() {
    int age = 16;
    if(age >= 18) {
        cout << "You can vote" << endl;
    } else {
        cout << "You are safe" << endl;
    }
}

void if_grade() {
    char grade = 'D';
    float points;
    if(grade == 'A') 
        points = 4.0;
    else if (grade == 'B') 
        points = 3.0;
    else if (grade == 'C') 
        points = 2.0;
    else 
        points = 0;

    cout << points << endl;
}

void switch_grade() {
    // (not recommend)
    char grade = 'A';
    float points;
    switch(grade){
        case 'A':
            points = 4.0;
            break;
        case 'B':
            points = 3.0;
            break;
        case 'C':
            points = 2.0;
            break;
        default:
            points = 0;
    }

    cout << points << endl;
}

int main() {
    // if_test();
    // if_grade();
    switch_grade();
}

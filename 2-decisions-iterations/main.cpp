#include <iostream>
using namespace std;

void iterations() {
    int i = 0;
    while(i <= 10) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    for(int i = 0; i <= 10; i++) {
        if(i == 2) { // skip this iteration only
            continue;
        }
        cout << i << " ";
    }

    cout << endl;
}

void test_switch() {
    char grade = 'B';
    int points;
    switch(grade) {
        case 'A':
            points = 4;
            break;
        case 'B':
            points = 3;
            break;
        case 'C':
            points = 2;
            break;
        case 'D':
            points = 1;
            break;
        default:
            cout << "Invalid" << endl;
            points = 0;
    }

    cout << "Points: " << points << endl;
}

void decisions() {
    int age = 16;
    if(age >= 18) {
        cout << "You can vote" << endl;
    } else {
        cout << "You can't vote" << endl;
    }
}

void cin_fn() {
    int val;

    cout << "Enter value: ";
    cin >> val;

    cout << "Value was: " << val << endl;
} 

int main() {
    char c;
    c = 'A';
    cout << c << endl;
    cout << (int) c << endl;
    // cin_fn();
    // decisions();
    // test_switch();
    iterations();   
    return 0;
}
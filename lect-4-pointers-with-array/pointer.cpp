#include <iostream>
using namespace std;

void pointer_test() {
    int x = 25;
    cout << "Value of x itself:                   " << x << endl;
    cout << "Value of address of x:               " << &x << endl;

    int *p;
    p = &x;

    cout << "Value of p itself:                   " << p << endl;
    cout << "Value at addressed of *p:            " << *p << endl;
}

void pointer_array_test(){
    int nums[10];
    for(int i = 0; i < 10; i++) {
        nums[i] = i;
    }
    int *p;
    p = nums;
    cout << "Value of nums:        " << nums << endl;
    cout << "Value of &nums[0]:    " << &nums[0] << endl;
    cout << "Value of p:           " << p << endl;
    cout << "Value of *p:          " << *p << endl;
    cout << "Inc p:                " << endl;
    p++;
    cout << "Value of p:           " << p << endl;
    cout << "Value of *p:          " << *p << endl;

    cout << "Entering loop after resetting p:        " << endl;

    p = &nums[0];

    for(int i = 0; i < 10; i++) {
        cout << "Value of p " << p << endl;
        cout << "Value of *p " << *p << endl;
        p++;
    }

    // cout << *p << endl; // Imagine what will this print
}

void null_pointer_test() {
    int *p, *q;

    int x = 20;
    p = &x;
    q = NULL;
    cout << "Value of p " << p << endl;
    cout << "Value of *p " << *p << endl;

    cout << "Value of q " << q << endl;
    cout << "Value of *q " << *q << endl;
}

int main() {
    // pointer_test();
    // pointer_array_test();
    null_pointer_test();
    return 0;
}
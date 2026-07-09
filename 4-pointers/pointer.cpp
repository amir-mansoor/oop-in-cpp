#include <iostream>
using namespace std;

void pointer_array() {
    int a[] = {1,2,3,4};

    int *p;

    p = a; // notice there is no &
    
    cout << *p << "\n";
    for(int i = 0; i < 4; i++) {
        cout << "Value of p " << p << " ";
        cout << "Value of *p " << *p << " ";
        p++;
        cout << "\n";
    }
    
    cout << "\n";
    cout << "Value of *p now:            " << *p << endl;

}

void pointer_test(){
    int x = 25;
    cout << "Value of x itself:              " << x << "\n";
    cout << "Value of address of x:          " << &x << "\n";
    
    int  *p; // integer pointer
    p = &x;

    cout << "Value of p itself:              " << p << "\n";
    cout << "Value of *p:                    " << *p << "\n";

    
    return;
}

void null_pointer_test() {
    int x = 25;
    int *p, *q;

    p = &x;
    q = NULL; // points to nothing
              //
    cout << "Value of p = " << p << "\n";
    cout << "Value of *p = " << *p << "\n";
    
    cout << "Value of q = " << q << "\n";
    cout << "Value of *q = " << *q << "\n"; // check for null before using
    
    
}

int main() {

    //pointer_test();
    //pointer_array();
    null_pointer_test();
    return 0;
}

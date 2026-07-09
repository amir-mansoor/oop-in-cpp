#include <iostream>
using namespace std;

#define SIZE 5
#define ABS(a) ((a) < 0 ? -(a) : (a))

#define INCLUDE_INVENTORY_MODULE

#ifdef INCLUDE_INVENTORY_MODULE
void show_inventor() {
    cout << "Shwoing inventory" << endl;
}
#endif
int main() {
    for(int i = 0; i < SIZE; i++) {
        cout << i << endl;
    }

    cout << ABS(-5) << endl;

    #ifdef INCLUDE_INVENTORY_MODULE
    show_inventor();
    #endif
    return 0;   
}
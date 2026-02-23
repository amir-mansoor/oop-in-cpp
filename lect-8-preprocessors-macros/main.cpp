#include <iostream>
using namespace std;

#define SIZE 5
#define ABS(a)  ((a) < 0 ? -(a) : a)
#define INCLUDE_INVENTORY_MODULE

#ifdef INCLUDE_INVENTORY_MODULE
void show_inventory(){
    cout << "Inventory is here" << endl;
}
#endif

int main() {
    cout << "Hello world" << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << i << endl;
    }

    cout << "SIZE" << endl;
    cout << "ABS " << ABS(-25) << endl;

    #ifdef INCLUDE_INVENTORY_MODULE
    show_inventory();
    #endif
    return 0;
}
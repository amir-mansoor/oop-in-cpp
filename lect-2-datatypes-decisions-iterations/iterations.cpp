#include <iostream>
using namespace std;

void for_loop() {
    //  initialize; condition; increment/decrement
    for(int i = 0; i < 5; i++) {
        if(i == 2) {
            continue;
        }

        if(i == 3) {
            break;
        }
        cout << i << endl;
    }
}

int main() {
    int i = 0;

    // while the condition is true execute the body
    // while(i < 5) {
    //     cout << i << endl;
    //     i++;
    // }

    for_loop();
    return 0;
}
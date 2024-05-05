#include <iostream>
using namespace std;

int main() {
    int myArray[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++) {
        cout << "Value of element " << i << " is " << myArray[i] << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int arr[3][4];

    // input value ke dalam array satu persatu dengan inputan
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            arr[i][j] = i * j;
        }
    }

    // output array yang telah diberi masukkan
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


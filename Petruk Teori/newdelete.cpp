#include <iostream> //the new & delete
using namespace std;
int main() {
    int* k;
    k = new int; // k nama pointer.
    *k = 8; // memberikan nilai ke int baru tanpa nama
    float* D;
    D = new float(4.0); // D nama pointer
    cout << "Alamat k = " << k << endl;
    cout << "Luas lingkaran dengan diameter 4.0 = " << 3.14159*(*D)*(*D)/4 << endl;
    delete k;
    delete D;
    return 0;
}

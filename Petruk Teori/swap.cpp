#include <iostream> //swap
using namespace std;
void Swap(int *px, int *py) // Definisi fungsi Swap
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}
int main()
{
    int m, n; // Deklarasi 2 bil. bulat
    cout << "Masukkan dua bilangan bulat: m = ";
    cin >> m;
    cout << "n = ";
    cin >> n;
    Swap(&n, &m);
    cout << "Setelah ditukar, nilai-nilai adalah: ";
    cout << "m = " << m << ", n = " << n << endl;
    return 0;
}

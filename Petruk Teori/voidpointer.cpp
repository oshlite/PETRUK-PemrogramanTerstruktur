#include<iostream> //void pointer
using namespace std;
int main()
{
    int x = 8, *px; // deklarasi variabel int dan pointer utk int
    double D = 5.8, *pd;
    px = &x;
    pd = &D;
    cout << "x = " << *px << endl;
    cout << "D = " << *pd << endl;
    void* pv; // deklarasi void pointer
    pv = &x; // alamat int ke void pointer
    cout << "Sekarang mendapatkan nilai melalui void pointers" << endl;
    cout << "x = " << *(int*)pv << endl; // pv diubah ke tipe int utk dereferencing
    pv = &D; // alamat double ke void pointer
    cout << "D = " << *(double*)pv << endl; // pv diubah ke tipe double utk dereferencing.
    return 0;
}

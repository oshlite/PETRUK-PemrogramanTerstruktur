#include <iostream> //9.6
using namespace std;
int main() {
    int A[] = {80, 70, 60, 50}; // Array A
    int B[] = {10, 20, 30, 40}; // Array B
    int* pAB[] = {A, B}; // Array dari pointer diinisialisasi dengan nama array A dan B
    cout << "Alamat A = " << A << endl;
    cout << "Alamat B = " << B << "\n\n";
    cout << "Alamat elemen pertama pAB[0] = " << pAB << endl;
    cout << "Alamat elemen kedua pAB[1] = " << pAB + 1 << endl;
    cout << "*pAB = " << *pAB << ",\t**pAB = " << **pAB << "\n\n";
    //*pAB = A dan **pAB = A[0], lihat output di bawah. 
    cout << "A[0] = *(*pAB) = " << *(*pAB) << endl;
    cout << "A[1] = *(*pAB + 1) = " << *(*pAB + 1) << endl;
    cout << "A[2] = *(*pAB + 2) = " << *(*pAB + 2) << endl;
    cout << "A[3] = *(*pAB + 3) = " << *(*pAB + 3) << endl << endl;  
    cout << "*(pAB + 1) = " << *(pAB + 1) << "\t **(pAB + 1) = " << **(pAB + 1) << endl;
    //*(pAB + 1) = B dan **(pAB + 1) = B[0], lihat output.
    cout << "B[0] = *(*(pAB + 1)) = " << *(*(pAB + 1) + 0) << endl;
    cout << "B[1] = *(*(pAB + 1) + 1) = " << *(*(pAB + 1) + 1) << endl;
    cout << "B[2] = *(*(pAB + 1) + 2) = " << *(*(pAB + 1) + 2) << endl;
    cout << "B[3] = *(*(pAB + 1) + 2) = " << *(*(pAB + 1) + 3) << endl;
    return 0;
}

#include<iostream>
using namespace std;

void tampilkan_nama(string nama){
    cout<<"Nama saya adalah "<<nama<<endl;
}

void absen(string nama, string npm){
    cout<<nama<<" "<<npm<<endl;
}

int main(){
    tampilkan_nama("Oryza");
    absen("Oryza Surya Hapsari","2317051107");
    string nama; string npm;
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NPM: ";
    cin >> npm;
    absen(nama,npm);    
    return 0;
}


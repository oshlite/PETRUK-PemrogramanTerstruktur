#include <iostream>
using namespace std;

class Mahasiswa{
    public:
        string nama,npm;
        Mahasiswa(string nama,string x){
            this->nama=nama;
            this->npm=x;
        }
};
int main(){
    Mahasiswa Mhs("Oryza Surya", "2317051107");
    cout<<"Nama: "<<Mhs.nama<<endl;
    cout<<"NPM: "<<Mhs.npm;
}

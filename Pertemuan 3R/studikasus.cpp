/* Studi Kasus
Surya diberi tugas oleh bosnya untuk menyimpan barang-barang yang telah diinput ke
dalam file, agar nanti barang-barang tersebut dapat di backtracking. Bantu Surya untuk
membuat program yang dapat menyimpan file menggunakan C++ */
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string teks[4];
	for(int i=0; i<4; i++){
		cin>>teks[i];
	}
	ofstream writeFile("barang_petruk3R.txt");
	for(int i=0; i<4; i++){
		writeFile<<teks[i]<<"\n";
	}
	writeFile.close();
}

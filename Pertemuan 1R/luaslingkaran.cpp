#include<iostream>
#include<cmath>
using namespace std;

void tampilkan_nama(string nama){
	cout<<"Nama saya adalah "<<nama<<endl;
}

double luasLingkaran(double r){
	double pi=M_PI;
	return pi*r*r;
}

int main(){
	tampilkan_nama ("Oryza");
		double r;
		cout<<"Masukkan jari-jari lingkaran: ";
		cin>>r;
		cout<<"Luas Lingkaran: "<<luasLingkaran(r)<<endl;
	return 0;
}

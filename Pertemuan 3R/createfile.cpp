//CREATE AND WRITE FILE
#include<iostream>
#include<fstream>
using namespace std;
int main(){
//	ofstream outFile("example.txt"); outfile=namaObjek/Variabelnya
	ofstream outFile("petruk3R.txt");
	outFile<<"Nama saya Saep"<<endl;
	outFile<<"Nama saya Oryza"<<endl;
	outFile.close();
}

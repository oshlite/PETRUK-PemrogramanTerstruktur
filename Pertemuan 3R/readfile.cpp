//READ FILE
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string teks;
	ifstream readFile("petruk3R.txt");
	while(getline(readFile, teks)){
		cout<<teks<<endl;
	}
	readFile.close();
}
